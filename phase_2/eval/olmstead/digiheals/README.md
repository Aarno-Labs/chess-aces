> **Lift target: `slapd`** (in `stripped/` and `unstripped/`). Single binary (the
> OpenLDAP server); CWE-787 OOB write in `slap_mods_check`.

# Bugs

1. Out-of-bounds write in `slap_mods_check` (0x3ec9c)
2. Auth bypass, incorrect comparison in `ldap_passwd_ss`

# Status

## slap_mods_check

- We are unable to generate user data. We have issues with the types.
Double definition of:
```
typedef int32_t (* ObjectClassSchemaCheckFN)(struct BackendDB*, struct Entry*, struct ObjectClass*, uint8_t const**, uint8_t*, uint32_t);
```
And incomplete type, probably due to bad ordering of the type definitions:
```
struct slap_overinfo
{
    struct BackendInfo oi_bi;
    ...
```

## ldap_passwd_ss

- Function it's in a library, not the main binary.
