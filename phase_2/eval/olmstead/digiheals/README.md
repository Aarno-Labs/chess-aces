> Lift targets: `slapd` (POV-1: CWE-787 OOB write in `slap_mods_check`) and
> `libldap_r-2.4.so.2.11.4` (POV-2: auth bypass in `ldap_passwd_ss`). Both in
> `stripped/` and `unstripped/`.

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

- Function is in a library, not the main binary. `slapd` dynamically links the
  reentrant build `libldap_r-2.4.so.2.11.4` (not `libldap`), and `ldap_passwd_ss`
  is the one the server actually loads from there — so that lib is the POV-2 lift
  target.
- Now shipped here as `unstripped/` + `stripped/libldap_r-2.4.so.2.11.4` (ARM
  32-bit, DWARF present, exports `ldap_passwd_ss`), extracted from the
  `ta3_olmstead` image.
