# Bugs

1. use-after-free in `handle__subscribe`. They took out a return at line 145.
2. stack bufferoverflow in `handle__unsubscribe`. Official fix is to switch from stack to heap and realloc as needed.

# Status

## Unstripped

- `handle__subscribe` cannot generate user data due to BinaryNinja type issues:
```
At line 1219:5:   must use 'struct' tag to refer to type 'UT_hash_handle'  # a lot of these
At line 1290:5:   must use 'struct' tag to refer to type 'mosquitto_plugin_id_t'
```
- I manually fixed the definition of `FUNC_plugin_init_v5` to include `struct` before `mosquitto_plugin_id_t`. See
bndb file.

## Stripped

- Userdata generated for `handle__subscribe`, see `stripped` folder.
- Lifting generation fails with exception regarding max recursive depth reached.
