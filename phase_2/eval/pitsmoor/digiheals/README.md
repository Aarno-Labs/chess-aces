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
