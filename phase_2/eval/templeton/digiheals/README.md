# Templeton — HTTP server

The challenge is a single HTTP-server binary, `templeton.bin`; the injected
vulnerability lives in it. Lift `stripped/templeton.bin`; use
`unstripped/templeton.bin` (symtab + DWARF) for types.

# Bugs

1. Code Injection (CWE-94): The challenge fails to properly escape double
quotations '"' when creating a php file which includes user input. This
allows an attacker to inject arbitrary php code and leak the token file.
In `escape_chars` at 0xba40.

2. Out of bounds read, infoleak. In `delete_invalid` at 0xa3ac

# Status

## escape_chars

- Have lifting! It's not as pretty as BN's though.
- Possible patch:
```
35:   if ((r3_12 == 34)) {
36:       r[j] = 92;
37:       j++;
38:   }
```
- Patcher fails with:
```
Traceback (most recent call last):
  File "/home/ricardo/code/aarno/amp/mram-patching.master/mram-patcher/applypatches.py", line 916, in pdj2llvm2ccf
    handle_PatchFragment(p, bg, use_gcc, relocatable_code, ctx, output)
    ~~~~~~~~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
  File "/home/ricardo/code/aarno/amp/mram-patching.master/mram-patcher/applypatches.py", line 829, in handle_PatchFragment
    ccode = serialize_PatchFragment_ccode_to_path(pf, bg, cpath)
  File "/home/ricardo/code/aarno/amp/mram-patching.master/mram-patcher/applypatches.py", line 501, in serialize_PatchFragment_ccode_to_path
    ccode = PatchFragment_spice2c(pf, bg.triple, bg.bm)
  File "/home/ricardo/code/aarno/amp/mram-patching.master/mram-patcher/applypatches.py", line 71, in PatchFragment_spice2c
    rawbodytokens = trampolines.trampoline_body_control_flow_munging(
        rawbodytokens, triple, self.trampoline_hook_pc(), hookedbytes
    )
  File "/home/ricardo/code/aarno/amp/mram-patching.master/mram-patcher/trampolines.py", line 1191, in trampoline_body_control_flow_munging
    munged.extend(munge_control_flow(controlflowstmt))
                  ~~~~~~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^
  File "/home/ricardo/code/aarno/amp/mram-patching.master/mram-patcher/trampolines.py", line 1178, in munge_control_flow
    assert False, "unhandled control flow token: " + str(stmttokens)
           ^^^^^
AssertionError: unhandled control flow token: ['goto', 'L0xbb10']
```
Looking at the PD file it looks like the AST differencing has a bug, it's thinking I'm adding more code than I actually am:
```
      "ExecuteNewStmtsAt": "0xbaf0",
      "NewStmts": [
        "if ((R3 != 92)) { if ((R3 <= 92)) { if ((R3 == 34)) { R0[j] = 92;",
        "j = (j + 1); }",
        "if ((R3 == 36)) { goto L0xbb10; } else { if ((R3 == 39)) { goto L0xbb10; } } }",
        "goto L0xbb38; }"
      ],
```

## delete_invalid 

- Lifting doesn't roundtrip. 
- Lifting itself is very verbose, and CH's version of the lifting has some variables with no types
(`?`) that I don't understand where they're coming from.
