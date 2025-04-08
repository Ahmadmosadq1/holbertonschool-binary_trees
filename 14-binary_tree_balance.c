#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}



/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the binary tree to measure.
 *
 * Description:
 * The height of a binary tree is defined as the length of the longest path
 * from the root node to a leaf. This function recursively traverses the tree
 * to calculate the height of both left and right subtrees, returning the
 * maximum of the two. If the tree is NULL, it returns 0.
 *
 * Return: The height of the binary tree. If the tree is NULL, it returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
        size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}
	return ((left_height > right_height) ? left_height : right_height);
}
