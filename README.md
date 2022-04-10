Parser for Merlin 6502 Assembly
===============================

![unit tests](https://github.com/dfgordon/tree-sitter-merlin6502/actions/workflows/node.js.yml/badge.svg)

This is a comprehensive language description and fast parser for Merlin 6502 Assembly language built using the [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) system.

Scope
-----

The parser recognizes Merlin 8 and Merlin 16 assembly language for the 6502 family of processors, including the 6502, 65C02, and 65816. The parser has to be called line by line, unless one is certain there are no implicit macro calls that match an operation or pseudo-operation with trailing characters.  If such a match is possible, the following must be carried out for each line:

* If the operator column matches a macro label *and* satisfies the below negative match conditions, then insert unicode `0x100` at the beginning of the line and re-parse it.
    - This is due to Merlin's allowance for, and use of, arbitrary trailing characters in an operator.
    - Note this implies downstream must respond to `XC` in order to evaluate which operations are valid.
    - This also requires parsing any `USE` files that may be referenced.
    - Negative match conditions:
        - Macro does not exactly match any valid operation
        - Macro does not exactly match any valid pseudo operation
        - Macro does not begin with `DEND` or `POPD`

There are some syntax errors that have to be detected downstream:

* Unpaired `EOM`
* Invalid context for local label
* Operation or addressing mode invalid for the given target

As of this writing, no attempt is made to support Merlin 16+ or Merlin 32 syntax.

Emulation
---------

The parser is supposed to produce a syntax tree consistent with the way legacy Merlin 8 or Merlin 16 would interpret a given source file.  As of this writing, the following are the only known inconsistencies:

* Labels cannot have semicolons or square brackets, except when starting a variable
* Delimited strings (dstrings) must always be terminated

References
-----------
 Merlin 8/16 Manual, copyright 1987, Roger Wagner Publishing, Inc.