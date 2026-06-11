# Bug

* Heap buffer overflow in `log__printf` in libmosquitto.so.2.0.10.

## Details

This is the call with a string that is too long inside of  `mosquitto_publish_v5` at 0x4754 in libmosquitto.so.2.0.10:
```actions.c
```c
if(mosquitto_validate_utf8(topic, (int)tlen)) {
			log__printf(mosq, MOSQ_LOG_ERR, "Can't publish the following topic as it was not formatted correctly in UTF-8 and should be fixed before trying again: %s", topic);
			return MOSQ_ERR_MALFORMED_UTF8;
}
```

`log__printf` is in `reference_patch/mosquitto_src/lib/logging_mosq.c` (there's another version of it that 
only applies to the server side of things)

# Status

- The source patch is to create a local buffer that is malloc'ed and use that for the logging. Not sure if 
we can support that.
- Lifting fails with:
```
chkx:ERROR:BL: Indirect call not yet handled at address 0x8538 [ARMCallOpcode:293] [ch:866]
```
