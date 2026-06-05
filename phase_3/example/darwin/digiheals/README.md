> **Lift target: `proftpd`** (in `stripped/` and `unstripped/`). Single binary.

# Darwin — ProFTPD

Use-after-free in the ProFTPD FTP server. The bug is in the core `proftpd` binary
(the only binary shipped here — no per-module `.so`). Lift `stripped/proftpd`; use
`unstripped/proftpd` (symtab + DWARF) for types.
