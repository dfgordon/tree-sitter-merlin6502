package tree_sitter_merlin6502_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-merlin6502"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_merlin6502.Language())
	if language == nil {
		t.Errorf("Error loading Merlin6502 grammar")
	}
}
