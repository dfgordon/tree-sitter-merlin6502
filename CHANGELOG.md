# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/), and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### New Features

* maintenance update for compatibility with tree-sitter 0.25
* allow `]0` to be used with `IF`

### Breaking Changes

* calls to the rust `set_language` function need to be updated

## [3.0.1] - 2024-08-17

### New Features

* argument to `IF` can be any expression starting with `MX`, including `MX` alone

## [3.0.0] - 2024-07-26

### New Features

* better handling of 16 bit syntax
* visibility in the syntax tree of `DS` backslash, data expressions
* maintenance update for compatibility with tree-sitter 0.22

### Breaking Changes

* the dependency on tree-sitter 0.22 will break older code
* `num` nodes no longer contain a radix node (use prefix)
* LR and braced expressions are aliased to the same node type

## [2.2.0] - 2024-04-21

This maintenance update was a SEMVER violation and was yanked from crates.io.

## [2.1.0] - 2023-10-01

### New Features

* Modify the handling of variables
    - macro variables `]1` through `]8` parse as `(var_label (var_mac))`
    - macro argument count `]0` parse as `(var_label (var_cnt))`
    - ordinary variables parse as `(var_label)` just as before
    - ordinary variables may not start with `]0` through `]8`, e.g., `]0VAR` is not accepted
* Allow single and double quoted strings as macro arguments
* Allow `var_mac` as an argument of several pseudo-operations
    - in this context `var_mac` occurs without the `(label_ref (var_label...))` wrapper
    - give precedence to `var_mac` over `]`-delimited strings

## [2.0.0] - 2023-03-11

### New Features

* Better optimized for LSP

### Breaking Changes

* Syntax tree is significantly changed

## [Unreleased] - 2022-03-27

Initial commit