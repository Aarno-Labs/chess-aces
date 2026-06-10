# Bugs

1. Double free, arbitrary write. In `dirswitch` (0x56a3c)
2. Uncontrolled recursion.

# Status

## dirswitch

- Patch moves the location of the free until after a check for invalid input is performed.
- Function with bug gets inlined into `serve_directory` at 0x56c28 making it a monster function.
Try disabling inlining.

## Bug 2

- The official patch is to remove an entry (`sym`) from a global table of commands to functions
handling that command. The table in the binary (an array of structs) doesn't look like a table/array
at all so the compiler seems to have done some shenanigans in there.
- I looked into nuking out the function that does the work, `serve_sym` at
0x5a510. It's supposed to call `do_cvs_command` and pass as an argument the function
that does the real work, `symb` at 0x2b42c. But the one that is being passed is
0x3b42c which doesn't match the source code at all. So I don't know if the build is wonky
or the fact that there's both client and server code is confusing BinaryNinja. Will
have to investigate later with more time and patience.
