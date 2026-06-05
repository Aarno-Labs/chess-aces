> **Lift target: `cvs`** (in `stripped/` and `unstripped/`). Single binary.

# Cherry — CVS server

CWE-415 double free / CWE-123 write-what-where in the CVS server. Single binary
`cvs` (needs a cvs directory at runtime). Lift `stripped/cvs`; types from
`unstripped/cvs` (symtab + DWARF).
