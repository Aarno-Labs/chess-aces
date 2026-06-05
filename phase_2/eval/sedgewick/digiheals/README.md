> **Lift target: `proftpd`** (in `stripped/` and `unstripped/`). Single binary
> (ProFTPD); both bugs (`xfer_rest`, `facts_opts_mlst`) are in this one binary.

# Bugs

1. Arithmetic Error, Information Disclosure (CWE-697: Incorrect Comparison,
   CWE-839: Numeric Range Comparison Without Minimum Check) in `xfer_rest` (0x81e60)
2. Stack Buffer overflow in `facts_opts_mlst` (0xa2474)

# Status

## xfer_rest

- Lifting errors:
```
ERROR:STMDB: Error value encountered in LHSs at address 0x81f58 [ARMStoreMultipleDecrementBefore:308]
ERROR:AST def conversion of variable R3_val_0x81f28_amp_0x81f2c to lval-expression at address 0x81f28 not yet supported [XXprUtil:1068]
ERROR:AST conversion of constant true not yet supported at address 0x81f00 [XXprUtil:238]
```
- To try: make `parse_offset` not inline. Doubt it will help as some of the
errors don't come from there.

## facts_opts_mlst

- Lifting has invalid C code due to the types:
```
Exception: /tmp/spice2cil.in.6jf5ehhc.c:34: Error: Type of field h is an undefined struct.
/tmp/spice2cil.in.6jf5ehhc.c:821: Error: Type of field children is an undefined struct.
/tmp/spice2cil.in.6jf5ehhc.c:827: Error: Type of field __anon0 is an undefined struct.
```
Offending types:
```
/* scc of ['union block_hdr', 'struct __anon_0x00008adc'] */
union block_hdr {
  struct __anon_0x00008adc h;
  union align a;
};
struct __anon_0x00008adc {
  void* endp;
  union block_hdr* next;
  void* first_avail;
};
```
and 
```
/* scc of ['struct json_node_st', 'union __anon_0x0007a2ee', 'struct __anon_0x0007a273'] */
union __anon_0x0007a2ee {
  struct __anon_0x0007a273 children;
  double number_;
  unsigned char* string_;
  int bool_;
};
struct json_node_st {
  struct json_node_st* parent;
  struct json_node_st* prev;
  struct json_node_st* next;
  unsigned char* key;
  enum __anon_0x0007a234 tag;
  union __anon_0x0007a2ee __anon0;
};
struct __anon_0x0007a273 {
  struct json_node_st* head;
  struct json_node_st* tail;
};
```
