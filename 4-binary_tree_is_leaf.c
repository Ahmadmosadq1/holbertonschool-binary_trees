#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Entry point
 *
 * Description :checks if a node is leaf or not
 *
 * @node: pointer to node
 * Return: 1 (on sucess), 0 (on failure)..
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
