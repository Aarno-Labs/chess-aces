> **Lift targets: `vme` and `mplex`** (each in `stripped/` and `unstripped/`).
> Per the challenge README, **only VME and MPLEX are in scope** — `vmc`, `pp`, and
> `defcomp` are **not** in scope (build/utility binaries). Don't lift those.

# Kiaora — DikuMUD3 (online MUD)

Injected memory-corruption bug (CWE-118) in DikuMUD3. `mplex` (the multiplexer)
handles client TCP/telnet connections and talks over pipes to `vme` (the Valhalla
Mud Engine, which holds game state). The vulnerability is reached over the client
connection; both `vme` and `mplex` are in scope (`challenge/vme/src`).

- Lift the `stripped/` copies; use the `unstripped/` copies (symtab + DWARF) for types.
- Five binaries are shipped — only `vme` and `mplex` matter; `vmc`/`pp`/`defcomp`
  are red herrings.
