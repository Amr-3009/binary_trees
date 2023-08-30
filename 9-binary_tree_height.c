#include "binary_trees.h"

/**
 * binary_tree_height - gets height of tree
 * @tree: ip1
 * Return: always
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t le = 0;
	size_t ri = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			le = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			ri = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((le > ri) ? le : ri);
	}
}
