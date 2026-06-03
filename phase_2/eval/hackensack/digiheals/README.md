# Bugs

1. use-after-free in `handle__subscribe`. They took out a return at line 145.
2. stack bufferoverflow in `handle__unsubscribe`. Official fix is to switch from stack to heap and realloc as needed.
3. auth bypass/incorrect comparison in `mosquitto_unpwd_check_default`. Official fix is to switch from strncmp to strcmp.

# Status

## handle__subscribe

- Userdata generated
- Lifting generation fails with errors/warnings:
```
ERROR:AST conversion of constant false not yet supported at address 0x151bc [XXprUtil:238]
ERROR:AST def conversion of variable R2_val_0x152c4_amp_0x152d4 to lval-expression at address 0x152c4 not yet supported [XXprUtil:1068]
ERROR:Bcc: conditional branch without branch conditions at address 0x15558 [ARMBranch:377]
ERROR:AST conversion of constant false not yet supported at address 0x15190 [XXprUtil:238]
ERROR:AST conversion of constant true not yet supported at address 0x151c0 [XXprUtil:238]
ERROR:AST conversion of constant true not yet supported at address 0x15540 [XXprUtil:238]
```

## handle__unsubscribe

- Userdata generated
- Lifting generates invalid C code
1. When the patcher does scc it doesn't add a forward declaration:
```
struct mosquitto__listener { 
   ...
   struct mosquitto__security_options security_options; 
   ...
};

struct mosquitto__security_options {
   ...
};
```
2. There's a global `struct mosquitto_db db` at address 0x47708 which gets accessed through a global pointer at 
address 0x471e4, but CH doesn't see the accesses to the global pointer as a struct access, instead we get things 
like:
```
  // Also ssa_R2_11 doesn't have a type
  ssa_R2_11 = db_pointer; // 0x158a4, LDR
  ssa_R3_21 = ssa_R2_11[104]; // 0x158ac, LDR
  ssa_R2_11[104] = (ssa_R3_21 + 1); // 0x158b4, STR
```

## mosquitto_unpwd_check_default

- Userdata generated 
- Warnings/errors in lifting. Same issue with `handle__unsubscribe` where CH doesn't handle accesses 
to the global `db` . The function also has some nasty hash table lookup code.
- It would be great if we could allow doing simple patches like "replace this function call with this 
other function call" without requiring a full lifting generation.

---

# EPL build (compile + smoke test)

ARM32 (musl) rebuild of the full Mosquitto broker via `docker compose build`
(see `../../../digiheals/ARM32.md`). Output is byte-identical to the `mosquitto`
already in `stripped/`/`unstripped/` here.

Built binary: `mosquitto` (both `stripped/` and `unstripped/`). The three bugs all
live in this single broker binary — there is no per-function `.so`.

## Build
```
cd ../../../digiheals/aarno && make arm-build-base   # one-time cross-compiler base image
cd phase_2/eval/hackensack && docker compose build
```
- binary: `/opt/arm-musl/sbin/mosquitto` (also `/home/challenge/mosquitto-2.0.4/build/src/mosquitto`)
- stripped copy via `arm-linux-musleabi-strip`

### Launch-command fix
For the broker (and thus the poller) to run, `challenge/Dockerfile`'s `CMD` must
point at the cross-install path and run under qemu with the musl sysroot (the
same pattern nethia/pitsmoor use):
```
CMD ["qemu-arm", "-L", "/arm-linux-musleabi-cross/arm-linux-musleabi", \
     "/opt/arm-musl/sbin/mosquitto", "-c", "/data/mosquitto.conf"]
```

## Smoke test (poller)
```
docker compose up -d ta3_hackensack
docker compose up --abort-on-container-exit --exit-code-from ta3_hackensack_poller ta3_hackensack_poller
docker compose down
```
Result: **PASS** — `[SUCCESS] Poller completed!` (poller exit 0).
