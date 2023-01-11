#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
  * binary_tree_balance - measures the balance factor of a binary tree
  * Return: Balance factor of the binary tree
  * @tree: pointer to the root node of the binary tree
  */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0, lh = 0, rh = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lh = binary_tree_height(tree->left);
	else
		lh--;
	if (tree->right)
		rh = binary_tree_height(tree->right);
	else
		rh--;
	balance = lh - rh;
	return (balance);
}

