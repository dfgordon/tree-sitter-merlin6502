Parser for Merlin 6502 Assembly
===============================

![unit tests](https://github.com/dfgordon/tree-sitter-merlin6502/actions/workflows/node.js.yml/badge.svg)

This is a comprehensive language description and fast parser for Merlin 6502 Assembly language built using the [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) system.

Scope
-----

The parser recognizes Merlin 8/16/16+/32 assembly language for the 6502 family of processors, including the 6502, 65C02, and 65816.

The parser recognizes assembly source only, i.e., it will not parse linker command files.

Merlin language versions satisfy the set relations 16+ ∋ 16 ∋ 8 and 16+ ∋ 32.  Similarly, processor instructions satisfy 65816 ∋ 65C02 ∋ 6502.  The parser accepts the most expansive sets, Merlin 16+ assembly, and 65816 instructions.  Downstream tools must filter the syntax tree if some other combination is the target.

The parser has to be called line by line, unless one is certain there are no implicit macro calls that match an operation or pseudo-operation with trailing characters.  If such a match is possible, the following must be carried out for each line:

* If the operator column matches a macro label *and* satisfies the below negative match conditions, then insert unicode `0x100` at the beginning of the line and re-parse it.
    - Negative match conditions:
        - Macro does not exactly match any valid operation
        - Macro does not exactly match any valid pseudo operation
        - Macro does not begin with `DEND` or `POPD`

There are some syntax errors that have to be detected downstream:

* Unpaired `EOM`
* Invalid context for local label
* Specific target limitations

Emulation
---------

The parser is supposed to produce a syntax tree consistent with the way Merlin 16+ would interpret a given source file.  As of this writing, the following are the only known inconsistencies:

* Labels cannot use any of `;[]{}`, except when starting a variable with `]`
* Delimited strings (dstrings) must always be terminated

References
-----------
* Merlin 8/16 Manual, copyright 1987, Roger Wagner Publishing, Inc.
* Merlin 16+ Manual, copyright 1988-1989, Roger Wagner Publishing, Inc.
* [Merlin 32 Documentation](https://brutaldeluxe.fr/products/crossdevtools/merlin/)