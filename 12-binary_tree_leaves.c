#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the total number of leaves in a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Description: A leaf is defined as a node that has no children (i.e., both
 * the left and right child pointers are NULL). This function traverses the
 * tree recursively, checking each node to determine if it is a leaf.
 *
 * Return: The total number of leaves in the binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			leaves += 1;
		}
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
