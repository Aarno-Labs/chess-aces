> **Lift target: `templeton.bin`** (in `stripped/` and `unstripped/`). Single binary.

# Templeton — HTTP server

The challenge is a single HTTP-server binary, `templeton.bin`; the injected
vulnerability lives in it. Lift `stripped/templeton.bin`; use
`unstripped/templeton.bin` (symtab + DWARF) for types.
