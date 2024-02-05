#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right of the parent
 * @parent: parent to insert left node
 * @value: value of the node
 *
 * Return: pointer to newly inserted node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	if (parent == NULL)
		return (NULL);

	tree = malloc(sizeof(binary_tree_t));

	if (tree == NULL)
	{
		free(tree);
		return (NULL);
	}

	tree->n = value;
	tree->left = NULL;
	tree->right = NULL;

	if (parent->left != NULL)
	{
		tree->right = parent->right;
		parent->right->parent = tree;
	}

	parent->right = tree;
	tree->parent = parent;

	return (tree);
}
