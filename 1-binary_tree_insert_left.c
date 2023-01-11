#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

        if (!newnode || !parent)
                return (NULL);
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
