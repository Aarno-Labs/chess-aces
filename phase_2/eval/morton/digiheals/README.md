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
