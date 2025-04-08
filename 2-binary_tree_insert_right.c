#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Entry point
 *
 * Description :creates right child node
 * @parent: parent node.
 * @value: node value
 *.
 * Return: new_right.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right = malloc(sizeof(binary_tree_t));
	binary_tree_t *tempNode;
	
	if (new_right == NULL)
		return (NULL);
	new_right->n = value;
	if (parent != NULL)
	{
	 	tempNode = parent->right;
		parent->right = new_right;
		new_right->right = tempNode;
		new_right->left = NULL;
		tempNode = new_right;
		new_right = parent;
	}
	else
	{
		parent->right = new_right;
		new_right->right = NULL;
		new_right->left = NULL;
		new_right = parent;
	}
	return (new_right);



}
