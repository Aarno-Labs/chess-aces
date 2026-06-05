> **Lift target: `vsftpd`** (in `stripped/` and `unstripped/`). Single binary.

# Earnshaw — vsftpd

CWE-122 heap-based buffer overflow in the vsftpd FTP server. It's a single
monolithic binary, `vsftpd`; lift `stripped/vsftpd`, use `unstripped/vsftpd`
(symtab + DWARF) for types.
