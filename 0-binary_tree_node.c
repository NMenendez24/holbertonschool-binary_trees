#include "binary_trees.h"

/**
  * binary_tree_node - Creates and insert a node in a binary tree
  * Return: Pointer to the new node
  * @parent: Pointer to the parent
  * @value: Value of the node
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);
	if (!parent)
	{
		newnode->n = value;
		newnode->left = NULL;
		newnode->right = NULL;
		newnode->parent = parent;
		return (newnode);
	}
	else
	{
		if (!parent->left)
		{
			newnode->n = value;
			parent->left = newnode;
			newnode->left = NULL;
			newnode->right = NULL;
			newnode->parent = parent;
		}
		else if (!parent->right)
		{
			newnode->n = value;
			parent->right = newnode;
			newnode->left = NULL;
			newnode->right = NULL;
			newnode->parent = parent;
		}
	}
	return (newnode);
}
