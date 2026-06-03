# Bugs

1. Failure to null terminate at date.c:76 This leads to a sprintf that leaks a stack address.
2. Heap overwrite. It occurs in knock.c:56

# Status

## Date: Stripped

- BN thinks there's an 0x1000 offset for load address which CH doesn't agree with. Had to open with
Ctrl-Shift-O and switch to 0.
- Function is at 0x754
- Added prototype for function:
```
  int32_t cmd_date(void* client, void* recv_mtags, int32_t parc, char const** parv)
```
- Fixed prototypes for `__time64`, `__localtime`, and `sendnumericfmt`
- Added definition for `struct tm` (man 3 tm)
- Added variable names and fixed types for some local variables to match source,
including main output buffer, `char request[0x400]`

- Lifting generation generates errors and warnings:
```
[CodeHawk] chkx:ERROR:Rdef: 0x7ac_clobber has not yet been introduced at address 0x7b4 [XXprUtil:1005]
[CodeHawk] chkx:ERROR:Rdef: 0x7ac_clobber has not yet been introduced at address 0x7b4 [XXprUtil:1005]
[CodeHawk] chkx:WARNING:ADD: aggregate jumptable at address 0x848 not yet handled [ARMAdd:263]
[CodeHawk] chkx:WARNING:ADD: aggregate jumptable at address 0xaac not yet handled [ARMAdd:263]
[CodeHawk] chkx:WARNING:ADD: aggregate jumptable at address 0xa6c not yet handled [ARMAdd:263]
[CodeHawk] chkx:WARNING:ADD: aggregate jumptable at address 0x990 not yet handled [ARMAdd:263]
[CodeHawk] chkx:WARNING:ADD: aggregate jumptable at address 0x950 not yet handled [ARMAdd:263]
[CodeHawk] chkx:WARNING:ADD: aggregate jumptable at address 0x848 not yet handled [ARMAdd:263]
[CodeHawk] chkx:WARNING:ADD: aggregate jumptable at address 0x950 not yet handled [ARMAdd:263]
[CodeHawk] chkx:WARNING:ADD: aggregate jumptable at address 0x990 not yet handled [ARMAdd:263]
[CodeHawk] chkx:WARNING:ADD: aggregate jumptable at address 0xa6c not yet handled [ARMAdd:263]
[CodeHawk] chkx:WARNING:ADD: aggregate jumptable at address 0xaac not yet handled [ARMAdd:263]
[CodeHawk] chkx:WARNING:Reaching definition address 0x7ac_clobber for variable R1  not found [ASTIProvenance:473]
[CodeHawk] chkx:WARNING:Reaching definition address 0x7ac_clobber for variable R1  not found [ASTIProvenance:473] [ch:866]
```

## Knock: Stripped

- BN thinks there's an 0x1000 offset for load address which CH doesn't agree with. Had to open with
Ctrl-Shift-O and switch to 0.
- Function is at 0xaf4
- Fixed prototype for `find_membership_link` and `sendnumericfmt`:
```
void sendnumericfmt(void* to, int32_t numeric, char const* fmt, ...)
```
- Function requires actual struct types. I exported the types from BN using the unstripped binary,
cleaned it up to avoid c99 issues and remove duplicate types, and saved it to `source/knock.so.h`.
Afterwards, I imported that header into the stripped bndb.
- Got a lifting, woohoo!!
- Patch is to remove [these lines](https://github.com/cromulencellc/chess-aces/blob/digiheals_samples/phase_3/eval/nethia/digiheals/source/knock.c#L55-L59):
```
    rtn_strlen__0 = strlen((*(reason)));
    rtn_malloc__0 = malloc((rtn_strlen__0 + 1));
    client->reason = rtn_malloc__0;
    rtn_strlen__1 = strlen(channel->name);
    memcpy(client->last_knock, channel->name, rtn_strlen__1);
    n = strlen((*(reason)));
    memcpy(rtn_malloc__0, (*(reason)), n);
```
- Here's the [PoV](https://github.com/cromulencellc/chess-aces/blob/master/phase_3/eval/nethia/pov_2/nethia.pov.2.py) and the [terse explanation](https://github.com/cromulencellc/chess-aces/tree/master/phase_3/eval/nethia#pov-2)
- Bug is caused by the first memcpy overwriting the `client->reason` pointer, and the 2nd one letting you write whatever you want to where `client->reason` is now pointing to
- I can apply the patch which results in 7 replacements, and the analysis works. Patched binary is in stripped/knock.patched.so

---

# EPL build (compile + smoke test)

ARM32 (musl) rebuild of the full app + modules via `docker compose build` (see
`../../../digiheals/ARM32.md`). Output is byte-identical to the binaries already
in `stripped/`/`unstripped/` here, except `unrealircd`, which differs only in its
embedded `__DATE__`/`__TIME__` build-timestamp string.

Built binaries: `unrealircd`, `knock.so`, `date.so` (both `stripped/` and `unstripped/`).

## Build
```
cd ../../../digiheals/aarno && make arm-build-base   # one-time cross-compiler base image
cd phase_3/eval/nethia && docker compose build
```
- server:  `/root/unrealircd/bin/unrealircd`
- modules: `/root/unrealircd/modules/{knock,date}.so`
- stripped copies via `arm-linux-musleabi-strip`

## Smoke test (poller)
```
docker compose up -d ta3_nethia
docker compose up --abort-on-container-exit --exit-code-from ta3_nethia_poller ta3_nethia_poller
docker compose down
```
Result: **PASS** — `[SUCCESS] All tests succeeded` (poller exit 0).
