Parser for Merlin 6502 Assembly
===============================

This is the rust binding for [tree-sitter-merlin6502](https://github.com/dfgordon/tree-sitter-merlin6502).  To use the parser, include the following in your package's `Cargo.toml`:
```toml
[dependencies]
tree-sitter = "~0.20.6"
tree-sitter-merlin6502 = "~1.0.0"
```
Here is a trivial `main.rs` example:
```rust
use tree_sitter;
use tree_sitter_merlin6502;

fn main() {
    let code = "10 GOTO 10\n";
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(tree_sitter_merlin6502::language())
      .expect("Error loading Integer BASIC grammar");
    let tree = parser.parse(code,None).unwrap();

    println!("{}",tree.root_node().to_sexp());
}
```
This should print the syntax tree
```
(source_file (line (linenum) (statement (statement_goto) (integer))))
```
For more on parsing with rust, see the general guidance [here](https://github.com/tree-sitter/tree-sitter/blob/master/lib/binding_rust/README.md).
