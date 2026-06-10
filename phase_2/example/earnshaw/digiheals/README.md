# Bugs 

1. Auth bypass. `vsf_sysdep_check_auth` at 0x1f554
2. Heap buffer overflow in `handle_mdtm` at 0x96d8
3. Infoleak due to bad casting. XXX: Haven't looked at it.

# Status

## vsf_sysdep_check_auth

- Lots of manual annotations. Binary dwarf didn't have struct mystr or the types for the passwd structs.
I added those by hand, and instead of using `struct passwd` I added a typedef into `passwd`. See userdata 
file for details.
- Invalid C code due to CH not handling global variable access properly. There's an integer global,
`tunable_check_shell` at 0x3770c, it's in the userdata but CH sees the access differently and 
generates this invalid code:
```
int ssa_R3_3;
...
ssa_R3_3 = gv_0x3644c;
ssa_R3_4 = (*(ssa_R3_3)); // Not a pointer, can't deref
```
The weirdest part is that the global's address doesn't match `tunable_check_shell` so I have no 
clue what is going on.

## handle_mdtm

- Types did not come through on the DWARF info and doing it by hand is too much of a pain.
