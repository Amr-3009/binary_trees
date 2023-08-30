#include "binary_trees.h"

/**
 * binary_tree_balance - gets balance factor
 * @tree: tree
 * Return: always
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0;
	int left = 0;
	int total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height(tree->left));
		right = ((int)binary_tree_height(tree->right));
		total = left - right;
	}
	return (total);
}
