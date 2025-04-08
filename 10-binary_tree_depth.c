#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a node in a binary tree.
 * @tree: A pointer to the node whose depth is to be measured.
 *
 * Return: The depth of the node. If the node is NULL, returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent != NULL)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	return (0);
}
