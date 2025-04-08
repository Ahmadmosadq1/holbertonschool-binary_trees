#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts tihe nodes in a binary tree that have at least
 * one child.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Description: A node is counted only if it has at least one child (either
 * left or right). This function uses recursion to traverse the entire binary
 * tree and tally the nodes meeting this condition.
 *
 * Return: The total number of nodes with at least one child.
 * If the tree is NULL, the function returns 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			nodes += 1; /* Increment the count for this node */
		}
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
