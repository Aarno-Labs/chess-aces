# Bugs 

1. Improper input validation, Uninitialized variable, leads to auth bypass. In `auth_chkpass`.
2. Infoleak. In `poll_ctrl`.
3. Infoleak caused by use-after-free? In `xfer_allo` at 0x86bd0.

# Status 

## auth_chkpass

- Source fix is to initialize the variable `res` to 0. 
- In the binary, the variable shows up at stack offset 0x24. I'm not sure how we could 
add code that initializes that stack slot.
- Lifting has invalid C code. Haven't looked at it.

## poll_ctrl 

- Function inlined inside of `pr_data_xfer` at 0x42c44. Should try disabling inlining.
- Patch is to remove a `&` on this call:
```
      pr_response_add_err(R_450, _("%s: data transfer in progress"),
-        (char *)&cmd->argv[0]); // PATCH_2
+        (char *) cmd->argv[0]); // PATCH_2
      }
```
I see that code at address 0x43810. Not sure how we would patch that:
```
0x0434b8                                    if (pr_cmd_cmp(s, 0x12) != 0)
0x043810                                        pr_response_add_err(&data_c8230, 
0x043810                                            dgettext(__domainname: "proftpd", 
0x043810                                                __msgid: "%s: data transfer in progress"), 
0x043810                                            **(s + 0x18)) // Patch would go here
0x0434b8                                    else
0x0434e4                                        pr_response_add_err(&data_c8230, 
0x0434e4                                            dgettext(__domainname: "proftpd", 
0x0434e4                                                __msgid: "
0x0434e4                                                    %lu: data transfer in progress"), 
0x0434e4                                            *(s + 0x18))
```

## xfer_allo 

- Source patch is to change a `>` to `>=` and null a pointer after a global variable has been `free`d.
- In the binary, the check is helpfully it's own statement at 0x870f0, although the check 
is backwards:
```
+0x0870e4                                    uint32_t n_3 = strlen(s: &data_ee7dc)
+0x0870e4                                    
+0x0870f0                                    if (n_3 u>= 0x7f)
+0x0870f0                                        n_3 = 0x7f
+0x0870f0                                    
+0x0870fc                                    memcpy(dest: &r->cpy_path, src: &data_ee7dc, n: n_3)
```
- The `free` call is also there:
```
0x08715c                                    free(ptr: response_2)
```
There's another location where `response` (a global) is set to `NULL`:
```
0x087008                        response = nullptr;
```
- When generating the lifting chkx exits with an exception:
```
  File "/home/ricardo/code/aarno/amp/codehawk/CodeHawk-Binary.waskyo/chb/cmdline/chkx", line 1936, in <module>
    args.func(args)
    ~~~~~~~~~^^^^^^
  File "/home/ricardo/code/aarno/amp/codehawk/CodeHawk-Binary.waskyo/chb/cmdline/astcmds.py", line 377, in buildast
    asts = astfunction.mk_asts(support)
  File "/home/ricardo/code/aarno/amp/codehawk/CodeHawk-Binary.waskyo/chb/astinterface/ASTInterfaceFunction.py", line 160, in mk_asts
    highlevel = self.mk_high_level_ast(support)
  File "/home/ricardo/code/aarno/amp/codehawk/CodeHawk-Binary.waskyo/chb/astinterface/ASTInterfaceFunction.py", line 198, in mk_high_level_ast
    ast = self.cfg_tc.ast(self, self.astinterface)
  File "/home/ricardo/code/aarno/amp/codehawk/CodeHawk-Binary.waskyo/chb/app/Cfg.py", line 682, in ast
    blocknode = astblock.ast(astree)
  File "/home/ricardo/code/aarno/amp/codehawk/CodeHawk-Binary.waskyo/chb/astinterface/ASTInterfaceBasicBlock.py", line 250, in ast
    return self.linear_ast(
           ~~~~~~~~~~~~~~~^
        astree, sorted(self.instructions.values(), key = lambda p:p.iaddr))
        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
  File "/home/ricardo/code/aarno/amp/codehawk/CodeHawk-Binary.waskyo/chb/astinterface/ASTInterfaceBasicBlock.py", line 269, in linear_ast
    instrs.extend(i.ast(astree))
                  ~~~~~^^^^^^^^
  File "/home/ricardo/code/aarno/amp/codehawk/CodeHawk-Binary.waskyo/chb/astinterface/ASTInterfaceInstruction.py", line 127, in ast
    self.ast_prov(astree)
    ~~~~~~~~~~~~~^^^^^^^^
  File "/home/ricardo/code/aarno/amp/codehawk/CodeHawk-Binary.waskyo/chb/astinterface/ASTInterfaceInstruction.py", line 113, in ast_prov
    (hl, ll) = self.instruction.ast_prov(astree)
               ~~~~~~~~~~~~~~~~~~~~~~~~~^^^^^^^^
  File "/home/ricardo/code/aarno/amp/codehawk/CodeHawk-Binary.waskyo/chb/arm/ARMInstruction.py", line 298, in ast_prov
    return self.opcode.ast_prov(
           ~~~~~~~~~~~~~~~~~~~~^
        astree, self.iaddr, self.bytestring, self.xdata)
        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
  File "/home/ricardo/code/aarno/amp/codehawk/CodeHawk-Binary.waskyo/chb/arm/opcodes/ARMSubtractCarry.py", line 135, in ast_prov
    (ll_lhs, _, _) = self.opargs[0].ast_lvalue(astree)
                     ~~~~~~~~~~~^^^
IndexError: list index out of range
```
