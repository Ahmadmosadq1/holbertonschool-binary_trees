#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the total number of nodes in a binary tree.
 * @tree: A pointer to the root node of the tree whose size is to be measured.
 *
 * Description: This function recursively traverses the binary tree
 * and counts all the nodes, including the root node, left subtree, and
 * right subtree. If the tree is empty (NULL), the function returns 0.
 *
 * Return: The size of the binary tree (total node count).
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree != NULL)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
