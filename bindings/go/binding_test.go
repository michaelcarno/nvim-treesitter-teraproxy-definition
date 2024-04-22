package tree_sitter_teraonline_definitions_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-teraonline_definitions"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_teraonline_definitions.Language())
	if language == nil {
		t.Errorf("Error loading TeraonlineDefinitions grammar")
	}
}
