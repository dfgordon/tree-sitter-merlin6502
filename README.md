Parser for Merlin 6502 Assembly
===============================

![unit tests](https://github.com/dfgordon/tree-sitter-merlin6502/actions/workflows/node.js.yml/badge.svg)

This is a comprehensive language description and fast parser for Merlin 6502 Assembly language built using the [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) system.

Scope
-----

The parser is designed to recognize Merlin 8 and Merlin 16 assembly language for the 6502 family of processors, including the 6502, 65C02, and 65816.  The parser will recognize the union of all the operations and pseudo-operations applicable in any of the cases.  It is up to downstream toolchains to impose restrictions recognizing only a subset, if desired.

Merlin 32 appears to be a syntactic subset of Merlin 16, in which case this parser can also be used for Merlin 32, with suitable downstream tweaks (needs more study).

Emulation
---------

The parser is supposed to produce a syntax tree consistent with the way legacy Merlin 8 or Merlin 16 would interpret a given source file.  As of this writing, the following are behaviors of the parser that are not consistent with Merlin:

* Mnemonics must match exactly, otherwise the operation is a macro
* Labels cannot have semicolons or square brackets, except when starting a variable
* Delimited strings (dstrings) must always be terminated

References
-----------
 Merlin 8/16 Manual, copyright 1987, Roger Wagner Publishing, Inc.