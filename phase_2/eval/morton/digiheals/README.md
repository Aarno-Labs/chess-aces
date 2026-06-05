> **Lift target: `libmosquitto.so.2.0.9`** (in `stripped/` and `unstripped/`) — **not**
> `mosquitto`. The bug is client-side, in the dynamically-linked library; the
> `mosquitto` broker binary here is the **wrong** target. See "Resolution — wrong
> binary" below.

Can't find the vulnerable function. According to the top-level README.md there should be this call:
```actions.c
```c
if(mosquitto_validate_utf8(topic, (int)tlen)) {
			log__printf(mosq, MOSQ_LOG_ERR, "Can't publish the following topic as it was not formatted correctly in UTF-8 and should be fixed before trying again: %s", topic);
			return MOSQ_ERR_MALFORMED_UTF8;
}
```
But that string is nowhere in the binary. There is also a `log__printf` function in the binary, but it's the one 
from `src/logging.c` instead of `src/logging_mosq.c`

## Resolution — wrong binary

The binary that was lifted here (`unstripped/mosquitto` / `stripped/mosquitto`) is the
**mosquitto broker daemon**. That is the wrong target:

- mosquitto has **two** functions named `log__printf`: the broker's (`src/logging.c`)
  and libmosquitto's (`lib/logging_mosq.c`). The broker binary only contains the
  former — which is why the one found here is the `src/logging.c` version and the
  UTF-8 string is absent.
- The top-level README says the vulnerability is injected **client-side only**, and
  the client (`mosquitto_sub`, the `Thermometer-1` IoT thermometer) links
  **libmosquitto** dynamically. So the vulnerable `log__printf`, the `actions.c`
  publish path, and the UTF-8 error string all compile into
  **`libmosquitto.so.2.0.9`**, *not* into the `mosquitto_sub` executable and *not*
  into the broker.

Verified: the UTF-8 string and the vulnerable `log__printf` are present **only** in
`libmosquitto.so.2.0.9` (the `pov/lib` and `poller/lib` copies), absent from the
broker and the client executable.

### Correct lift target (added here)

- `unstripped/libmosquitto.so.2.0.9` — built from `challenge/mosquitto_src`
  (`make -C lib`, default `-ggdb` → DWARF) for header/type extraction.
- `stripped/libmosquitto.so.2.0.9` — stripped twin, the lift target proper.
- `morton.h` — regenerated from `unstripped/libmosquitto.so.2.0.9` (107/107
  functions resolved).

The bug: `log__printf` does `vsnprintf(mosq->log_string, len, fmt, va)` with
`len = strlen(fmt) + 500`, writing into the fixed 600-byte `char log_string[MQTT_MAX_STR]`
field of `struct mosquitto` (`lib/mosquitto_internal.h`). The only call site that
exceeds 600 bytes is the UTF-8 topic error in `lib/actions.c` (reached via
`mosquitto_publish`), so a publish to a >500-byte invalid-UTF-8 topic overflows
`log_string` into the adjacent `userdata` / `on_connect` function pointer. CWE-122.
The fix (`reference_patch/vulnerability.patch`) heap-allocates the buffer instead.
