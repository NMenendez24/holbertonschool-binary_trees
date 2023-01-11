#include "binary_trees.h"

/**
  * binary_tree_depth - measures the depth of a node in a binary tree
  * Return: The depth, otherwise 0
  * @tree: pointer to the node to measure the depth
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t h = 0;

	if (!tree)
		return (0);
	while ((tree = tree->parent))
		h++;
	return (h);
}
