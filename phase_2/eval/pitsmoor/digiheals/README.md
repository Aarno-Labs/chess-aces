# Bugs

1. Stack buffer overflow in `IRC_KICK`
2. Authentication bypass in `Client_SetInfo`

# Status 

## IRC_KICK 

- Errors/warnings during lifting generation:
```
ERROR:Rdef: 0x1ba54_clobber has not yet been introduced at address 0x1ba84 [XXprUtil:1005]
ERROR:AST def conversion of variable R3_val_0x1ba80_amp_0x1ba8c to lval-expression at address 0x1ba8c not yet supported [XXprUtil:1068]
WARNING:LDRB: Unable to use a C expression for rhs. Fall back to native byte-based address: R4 to form rhs *itemList_1 at address 0x1ba6c [ARMLoadRegisterByte:281]
WARNING:LDRB: Unable to use a C expression for rhs. Fall back to native byte-based address: R2 to form rhs *itemList_2 at address 0x1baa0 [ARMLoadRegisterByte:281]
WARNING:Reaching definition address 0x1ba54_clobber for variable R2  not found [ASTIProvenance:481]
```

## Client_SetInfo

- Invalid C code generated. Looking at CH's own lifting, it also seems to be having trouble with 
global variables. There's a `bool Conf_CloakUserToNick` at 0x3a392 that gets access through a pointer 
at 0x392ac which CH doesn't recognize as such, instead it generates its own global `int gv_0x392ac` and 
then in the code `if (((*(gv_0x392ac)) != 0)) {`.

---

# EPL build (compile + smoke test)

ARM32 (musl) rebuild of the full ngIRCd server via `docker compose build` (see
`../../../digiheals/ARM32.md`). Output is byte-identical to the `ngircd` already
in `stripped/`/`unstripped/` here, except for its embedded `__DATE__`/`__TIME__`
build-timestamp ("Birth Date") string.

Built binary: `ngircd` (both `stripped/` and `unstripped/`).

## Build
```
cd ../../../digiheals/aarno && make arm-build-base   # one-time cross-compiler base image
cd phase_2/eval/pitsmoor && docker compose build
```
- binary: `/home/challenge/ngircd/src/ngircd/ngircd`
- runs under `qemu-arm -L /arm-linux-musleabi-cross/arm-linux-musleabi`
- stripped copy via `arm-linux-musleabi-strip`

## Smoke test (poller)
```
docker compose up -d ta3_pitsmoor
docker compose up --abort-on-container-exit --exit-code-from ta3_pitsmoor_poller ta3_pitsmoor_poller
docker compose down
```
Result: **PASS** — `[SUCCESS] All tests succeeded` (poller exit 0).
