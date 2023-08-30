#include "binary_trees.h"

/**
 * binary_tree_nodes - gets number of nodes
 * @tree: ip1
 * Return: always
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node_count = node_count + ((tree->left || tree->right) ? 1 : 0);
		node_count = node_count + binary_tree_nodes(tree->left);
		node_count = node_count + binary_tree_nodes(tree->right);
		return (node_count);
	}
}
