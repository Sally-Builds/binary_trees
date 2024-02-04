#include "binary_trees.h"

/**
 * binary_tree_node - creates a node in a tree
 * @parent: parent to node
 * @value: actual value in node
 *
 * Return: Pointer to newly created node or NULL
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *tree = NULL;

	tree = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (tree == NULL)
	{
		free(tree);
		return (NULL);
	}

	tree->n = value;
	tree->left = NULL;
	tree->right = NULL;
	tree->parent = parent;


	return (tree);
}
