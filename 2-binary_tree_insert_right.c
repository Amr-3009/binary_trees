#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_insert_right - add node the right of the parent
 * @parent: parent node
 * @value: node value
 * Return: always
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	n_node = binary_tree_node(parent, value);
	if (n_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		n_node->right = parent->right;
		parent->right->parent = n_node;
	}
	parent->right = n_node;
	return (n_node);
}
