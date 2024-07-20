Parser for Merlin Assembly
==========================

This is the node binding for `tree-sitter-merlin6502`.  See the main README [here](https://github.com/dfgordon/tree-sitter-merlin6502).

Here is a sample `package.json`:

```json
{
  "name": "parsing-example",
  "version": "1.0.0",
  "description": "merlin parsing example",
  "main": "index.js",
  "scripts": {
    "test": "echo \"Error: no test specified\" && exit 1"
  },
  "author": "",
  "license": "ISC",
  "dependencies": {
    "tree-sitter": "^0.21.1",
    "@dfgordon/tree-sitter-merlin6502": "^3.0.0"
  }
}
```

You will also need `.npmrc` in the same directory:

```
@dfgordon:registry=https://npm.pkg.github.com
```

With an example `index.js` as follows:

```js
const Parser = require('tree-sitter');
const Merlin = require('tree-sitter-merlin6502');

const code = 'my_label lda #$00"\n';
const parser = new Parser();
parser.setLanguage(Merlin);
tree = parser.parse(code);
console.log(tree.rootNode.toString());
```

This should print the syntax tree

```
(source_file (operation (label_def (global_label)) (op_lda) (arg_lda (imm (imm_prefix) (num)))))
```

For more on parsing with node, see the general guidance [here](https://github.com/tree-sitter/node-tree-sitter).
