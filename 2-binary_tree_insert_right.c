#include "binary_trees.h"

/**
  * binary_tree_insert_right - Insert a node to the right of a parent
  * Return: Pointer to the new node
  * @parent: Pointer to the parent
  * @value: Value of the new node
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);
	if (!parent)
	{
		free(newnode);
		return (NULL);
	}
	if (parent->right)
	{
		parent->right->parent = newnode;
		newnode->right = parent->right;
		newnode->left = NULL;
		newnode->parent = parent;
		newnode->n = value;
		parent->right = newnode;
	}
	else
	{
		newnode->n = value;
		parent->right = newnode;
		newnode->right = NULL;
		newnode->left = NULL;
		newnode->parent = parent;
	}
	return (newnode);
}
