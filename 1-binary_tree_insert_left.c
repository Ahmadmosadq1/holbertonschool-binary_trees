#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry point
 *
 * Description :creates a left child.
 * @parent: parent node
 * @value: the value of the node
 *.
 * Return: new_left.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left = malloc(sizeof(binary_tree_t));
	if (new_left == NULL)
		return (NULL);
	new_left->n = value;
	if (parent->left == NULL)
		return (NULL);
	parent->left = new_left;
	new_left->parent = parent;
	new_left->left = NULL;
	new_left->right = NULL;
	return (new_left);
}
