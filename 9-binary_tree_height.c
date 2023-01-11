#include "binary_trees.h"

/**
  * binary_tree_height - Calculates the height of a binary tree
  * Return: Height
  * @tree: Binary Tree
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0, h2 = 0;

	if (!tree)
		return (0);
	h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	h2 = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (h > h2 ? h : h2);
}
