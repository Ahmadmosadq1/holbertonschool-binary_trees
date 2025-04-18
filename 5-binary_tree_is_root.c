#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Entry point
 *
 * description: checks if a node is a root
 * @node: pointer to node.
 *
 * Return: 0 (Success), 1(failure).
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node != NULL && node->parent == NULL)
		return (1);
	else
		return (0);
}
