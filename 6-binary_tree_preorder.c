#include "binary_trees.h"

/**
 * binary_tree_preorder - goes theough binary tress using preorder
 * @tree: tree to search
 * @func: use func
 * Return: always
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
