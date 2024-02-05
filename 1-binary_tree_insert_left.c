#include "binary_trees.h"


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	tree = malloc(sizeof(binary_tree_t));

	if (tree == NULL)
	{
		free(tree);
		return (NULL);
	}

	tree->n = value;

	if (parent->left != NULL) 
	{
		tree->left = parent->left;
		parent->left->parent = tree;
	}

	parent->left = tree;
	tree->parent = parent;

	return (tree);
}
