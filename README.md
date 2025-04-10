# 0-binary_tree_node

## Description
Create a function that allocates a new binary tree node.  
The node has no children (left and right are NULL).  
It can optionally be linked to a parent.

## How I Solved It
- Used `malloc` to create the node.
- Assigned value and parent.
- Set both left and right children to `NULL`.

## Prototype
```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

1. Insert left:
- We have to allocate a memeory size for the new node
- before inserting the new node, we need to check weather the parent has a left child or not
- if it does  not have, then we can assign like (new->parent = partent ) and (parent->left = new)
- however, if the parent root already has a left child, then according to the task requriments , we need to remove it and make the left child of the new node.
- so to save the left child of the parent, we first have to put it in a temp node, (tempNode = parent->left), then (parent->left = new) and (new->left = tempNode)
- and assign right to NULL.

2. Insert right:
- it is the exact same as the pervous task but instead of left child, we are dealing with the right child

3. Delete:
- this task is acived using recursion. our base case is when a node's left or right child returns.
- in our code, we have a post traversal order. meaning, it will prints left, node and right.
- the code starts with left recursion by (tree->right), it will not print yet, but it keeps going left as (tree != NULL) is True.
- when it reaches the last left child, the cndition is satisfied and now the funtions will go back and prints on the way.
- each node it passes on way back, it prints it. so the left childern will be printed from the bottom to the top node.
- after all the left childern complete, now it starts in the right recusrion.

4. Is leaf:
- here, we are checking if the node is leaf. the defination of leaf node is a parent with no childern.
- so the left and right child need to be NULL. if so , it is a leaf node.

5. Is root:
- the node is only a root when it has no parents. it is like an orphan. so node->parent == NULL should be True.

6. Pre-order traversal:
- 
