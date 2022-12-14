#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is leaf (no bbs)
 * @node: node in question
 * Return: 1 if leaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
