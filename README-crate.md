Parser for Merlin 6502 Assembly
===============================

This is the rust binding for [tree-sitter-merlin6502](https://github.com/dfgordon/tree-sitter-merlin6502).  To use the parser, include the following in your package's `Cargo.toml`:
```toml
[dependencies]
tree-sitter = "0.22.4"
tree-sitter-merlin6502 = "2.3.0"
```
Here is a trivial `main.rs` example:
```rust
use tree_sitter;
use tree_sitter_merlin6502;

fn main() {
    let code = " LDA #$00\n";
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(&tree_sitter_merlin6502::language())
      .expect("Error loading Merlin 6502 grammar");
    let tree = parser.parse(code,None).unwrap();

    println!("{}",tree.root_node().to_sexp());
}
```
This should print the syntax tree
```
(source_file (operation (op_lda) (arg_lda (imm (imm_prefix) (num (hex))))))
```
For more on parsing with rust, see the general guidance [here](https://github.com/tree-sitter/tree-sitter/blob/master/lib/binding_rust/README.md).
