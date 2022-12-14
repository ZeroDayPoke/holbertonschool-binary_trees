#include "binary_trees.h"

/**
 * binary_tree_inorder - exec func(node->n) on all tree
 * @tree: root of tree to use func on
 * @func: func to run on node
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
