#include"binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Entry point
 *
 * Description :a funtion that prints a binary tree
 *
 * @parent: the parent node.
 * @value: the value of n
 * Return: new.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
