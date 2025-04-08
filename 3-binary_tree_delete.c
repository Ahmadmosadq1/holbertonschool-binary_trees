#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Entry point
 *
 * @tree: binary tree
 * Return: Always 0 (Success)
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
	else
		return;
}
