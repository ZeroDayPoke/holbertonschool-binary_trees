#include "binary_trees.h"

/**
 * binary_tree_preorder - exec func(node->n) on all tree
 * @tree: root of tree to use func on
 * @func: function to run on node
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
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
