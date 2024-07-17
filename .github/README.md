Parser for Merlin 6502 Assembly
===============================

![unit tests](https://github.com/dfgordon/tree-sitter-merlin6502/actions/workflows/node.js.yml/badge.svg)

This is a parser for Merlin assembly language intended for use with language servers.  It is built using the [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) system.  Bindings are available for several languages.  The following pre-built packages are available:

* [Parsing Merlin with C++](https://github.com/dfgordon/tree-sitter-merlin6502/releases)
* [Parsing Merlin with Rust](https://crates.io/crates/tree-sitter-merlin6502)
* [Parsing Merlin with WASM](https://github.com/dfgordon/tree-sitter-merlin6502/releases)
* [Parsing Merlin with Node](https://github.com/dfgordon/tree-sitter-merlin6502/pkgs/npm/tree-sitter-merlin6502)

For details on parser usage and design see the [wiki](https://github.com/dfgordon/tree-sitter-merlin6502/wiki).

Scope
-----

The parser recognizes Merlin 8/16/16+/32 assembly language for the 6502 family of processors, including the 6502, 65C02, and 65816.

The parser recognizes assembly source only, i.e., it will not parse linker command files.

Merlin language versions satisfy the set relations 16+ ∋ 16 ∋ 8 and 16+ ∋ 32.  Similarly, processor instructions satisfy 65816 ∋ 65C02 ∋ 6502.  The parser accepts the most expansive sets, Merlin 16+ assembly, and 65816 instructions.  Downstream tools must filter the syntax tree if some other combination is the target.

If one is unconcerned about resolving conflicts between implicit macro calls and (pseudo)ops, the parser can digest an entire source file all at once.  If one wishes to distinguish these the same way Merlin does, the procedure is as follows: 

* Downstream parses each line, and uses the document's symbol information to decide if column 2 is a macro call
* If it is, insert unicode `0x100` at the beginning of the line and re-parse it; the line's syntax tree should now be correct.

There are some syntax errors that have to be detected downstream:

* Unpaired `EOM`
* Invalid context for local label
* Specific target limitations

Emulation
---------

The parser is supposed to produce a syntax tree consistent with the way Merlin 16+ would interpret a given source file.  As of this writing, the following are the only known inconsistencies:

* Labels cannot use any of `;[]{}`, except when starting a variable with `]`
* Labels cannot start with `|` or `^`
* Delimited strings (dstrings) must always be terminated

References
-----------
* Merlin 8/16 Manual, copyright 1987, Roger Wagner Publishing, Inc.
* Merlin 16+ Manual, copyright 1988-1989, Roger Wagner Publishing, Inc.
* [Merlin 32 Documentation](https://brutaldeluxe.fr/products/crossdevtools/merlin/)