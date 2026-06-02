# Bugs

1. use-after-free in `handle__subscribe`. They took out a return at line 145.
2. stack bufferoverflow in `handle__unsubscribe`. Official fix is to switch from stack to heap and realloc as needed.

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
