#include "binary_trees.h"

/**
  * binary_tree_size - measures the size of a binary tree
  * Return: size of the binary tree, 0 otherwise.
  * @tree: pointer to the root node of the tree to measure the size
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	size++;
	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);
	return (size);
}

