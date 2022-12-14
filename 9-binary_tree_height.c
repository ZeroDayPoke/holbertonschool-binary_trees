#include "binary_trees.h"

/**
 * binary_tree_height - measures height / levels of tree
 * @tree: root of tree to measure
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t bRight = 0;
	size_t bLeft = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	bRight = binary_tree_height(tree->right);
	bLeft = binary_tree_height(tree->left);
	if (bRight > bLeft)
		return (bRight + 1);
	else
		return (bLeft + 1);
}
