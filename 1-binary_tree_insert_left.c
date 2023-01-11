#include "binary_trees.h"

/**
  * binary_tree_insert_left - Insert a node to the left of the parent
  * Return: Pointer to the node
  * @parent: Pointer to the parent
  * @value: Value of the new node
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);
	if (!parent)
	{
		free(newnode);
		return (NULL);
	}
	if (parent->left)
	{
		parent->left->parent = newnode;
		newnode->left = parent->left;
		newnode->right = NULL;
		newnode->parent = parent;
		newnode->n = value;
		parent->left = newnode;
	}
	else
	{
		newnode->n = value;
		parent->left = newnode;
		newnode->left = NULL;
		newnode->right = NULL;
		newnode->parent = parent;
	}
	return (newnode);
}
