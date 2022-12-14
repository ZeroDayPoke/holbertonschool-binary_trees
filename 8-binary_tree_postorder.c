#include "binary_trees.h"

/**
 * binary_tree_postorder - exec func(node->n) on all tree
 * @tree: root of tree to use func on
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
	return;
}
