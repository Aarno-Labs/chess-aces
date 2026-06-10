# Bug

* Heap buffer overflow in `log__printf`.

## Details

This is the call with a string that is too long:
```actions.c
```c
if(mosquitto_validate_utf8(topic, (int)tlen)) {
			log__printf(mosq, MOSQ_LOG_ERR, "Can't publish the following topic as it was not formatted correctly in UTF-8 and should be fixed before trying again: %s", topic);
			return MOSQ_ERR_MALFORMED_UTF8;
}
```

# Status

- Library binary was x86_64; replaced with the cross-compiled ARM
  `libmosquitto.so.2.0.10` extracted from the `ta3_morton_server` image
  (mosquitto_src is v2.0.10; the injected `log__printf` overflow is identical).
- `morton.h` is still the header generated from the old x86 2.0.9 lib — pending
  regeneration from the ARM 2.0.10 lib.

# Notes on Binaries

Lift target: `libmosquitto.so.2.0.10` (in `stripped/` and `unstripped/`).

The bug is client-side, in the dynamically-linked library. The `mosquitto` broker
is not a lift target and is no longer shipped here.

### Correct lift target

- `unstripped/libmosquitto.so.2.0.10` — the ARM build extracted from the
  `ta3_morton_server` image (built from `challenge/mosquitto_src`, default
  `-ggdb` → DWARF) for header/type extraction.
- `stripped/libmosquitto.so.2.0.10` — stripped twin (stripped with the image's
  own `arm-linux-musleabi-strip`), the lift target proper.
- `morton.h` — still generated from the old x86 `libmosquitto.so.2.0.9` (107/107
  functions resolved); pending regeneration from the ARM 2.0.10 lib.

The bug: `log__printf` does `vsnprintf(mosq->log_string, len, fmt, va)` with
`len = strlen(fmt) + 500`, writing into the fixed 600-byte `char log_string[MQTT_MAX_STR]`
field of `struct mosquitto` (`lib/mosquitto_internal.h`). The only call site that
exceeds 600 bytes is the UTF-8 topic error in `lib/actions.c` (reached via
`mosquitto_publish`), so a publish to a >500-byte invalid-UTF-8 topic overflows
`log_string` into the adjacent `userdata` / `on_connect` function pointer. CWE-122.
The fix (`reference_patch/vulnerability.patch`) heap-allocates the buffer instead.

Verified: the UTF-8 error string and the vulnerable `log__printf` are present in
the ARM `libmosquitto.so.2.0.10` lift target (both `stripped/` and `unstripped/`).
The bug is injected client-side only: the `Thermometer-1` IoT thermometer client
(`mosquitto_sub`) links libmosquitto dynamically, so the vulnerable `log__printf`,
the `actions.c` publish path, and the UTF-8 error string all compile into the
shared library — not into the `mosquitto_sub` executable and not into the broker
(whose `src/logging.c` `log__printf` has no UTF-8 path). The deployed client lib
under `pov/lib` and `poller/lib` is the older x86 `libmosquitto.so.2.0.9` and
carries the identical injected bug.
