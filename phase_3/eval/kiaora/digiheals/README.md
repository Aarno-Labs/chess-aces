# Bugs

1. Arithmetic error in `nanny_existing_pwd`
2. Format string vulnerability, when processing an incorrect username. Leads to infoleak.
Could also be used for arbitrary code exec but PoV only does infoleak. In `cConHook::IndentText`
(C++ code).
3. Memory corruption (POV may not always succeed). In `cConHook::AddInputChar`, `cConHook::AddString`,
and `cConHook::Input`
4. DoS. In `circle_alias`, `alias_is_ok`, `local_dictionary`, and new `dictionary` function.

# Notes 

Only `vme` and `mplex` are lift targets and the only binaries shipped here (the
`defcomp`, `pp`, and `vmc` build/support tools are out of scope and not shipped).
Bugs 1 and 4 (`nanny_existing_pwd`, `circle_alias`) are in `vme`; bugs 2 and 3
(`cConHook::IndentText`, `cConHook::AddInputChar`/`AddString`/`Input`) are in `mplex`.

# Status 

## nanny_existing_pwd

- Source patch is in `reference_patch/DikuMUD3/vme/src/nanny.cpp`. They change 
the type of a var from int8_t to int, and beyond some casting changes the main 
change seems to be to remove the `MadeToWait < 0` check.
- The function is complex enough (ie. low change of getting a lifting) and the
patch not obvious enough that I'm punting for now on trying to get a lifting.

## cConHook::IndentText

- C++ code. Don't want to go down this rabbit hole right now.
- Source patch in `reference_patch/DikuMUD3/vme/src/mplex/ClientConnector.cpp`. It 
moves an increment from inside an if into the array access inside the if, and changes
a call to `alsprintf` to have a `%s` argument, instead of passing the raw string as 
the format. For the latter, we should be able to apply HawkEye things?

## Bug 3 (multiple functions)

- C++ code and multiple functions. Punting.

## Bug 4 (multiple functions) 

- Multiple functions. Source patch in `reference_patch/DikuMUD3/vme/src/dictionary.cpp`.
Patch adds a new check (for `!`) in `circle_alias`, and if detected, returns
the value `4`, while changing the existing `return 4` to `return 5`. This
cascades through the other functions, which now have new code when `4` is returned 
while changing existing cases to use `5` instead of `4`.
- Not clear to me what the new `dictionary` function is for. Perhaps leftover?
- Punting for now.
