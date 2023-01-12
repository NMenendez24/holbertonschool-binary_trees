#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "12-binary_tree_leaves.c"

/**
  * ipow - base to the power of exp
  * Return: The base power by exp
  * @base: Base number
  * @exp: Exponent
  */

size_t ipow(int base, int exp)
{
	int result = 1;

	for (;;)
	{
		if (exp & 1)
			result *= base;
		exp >>= 1;
		if (!exp)
			break;
		base *= base;
	}

	return (result);
}

/**
  * binary_tree_is_perfect - checks if a binary tree is perfect
  * Return: 1 if its perfect, 0 if not.
  * @tree: pointer to the root node of the tree to check
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leaves = 0, height = 0;

	if (!tree)
		return (0);
	leaves = binary_tree_leaves(tree);
	height = binary_tree_height(tree);
	if (ipow(2, height) == leaves)
		return (1);
	return (0);
}

