#include "binary_trees.h"

/**
  * binary_tree_sibling - Checks the sibling of a node
  * Return: Pointer to the sibling
  * @node: Pointer to the node
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node || !node->parent || !node->parent->left || !node->parent->right)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
