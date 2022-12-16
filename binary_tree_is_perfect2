#include "binary_trees.h"

/**
 * binary_tree_height_2 - measures height / levels of tree
 * @tree: root of tree to measure
 * Return: height of tree
 */
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t bRight = 0;
	size_t bLeft = 0;

	if (!tree)
		return (0);

	bRight = binary_tree_height_2(tree->right);
	bLeft = binary_tree_height_2(tree->left);
	if (bRight > bLeft)
		return (bRight + 1);
	else
		return (bLeft + 1);
}

/**
 * binary_tree_balance - comps balance (left v right bbs)
 * @tree: root node to count balance w resp to
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t leftTot = 0, rightTot = 0, cmp = 0;

	if (!(tree))
		return (0);

	rightTot = binary_tree_height_2(tree->right);
	leftTot = binary_tree_height_2(tree->left);
	cmp = leftTot - rightTot;
	return (cmp);
}

/**
 * binary_tree_is_full - check if all branches (downward) has leaves
 * @tree: root node to check fullness w respect to
 * Return: 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int fullCheckLeft = 0, fullCheckRight = 0, cmp = 0;

	if (!(tree))
		return (0);

	if (!(tree->right) && !(tree->left))
		return (1);
	else
	{
		fullCheckLeft = binary_tree_is_full(tree->left);
		fullCheckRight = binary_tree_is_full(tree->right);
		cmp = fullCheckLeft - fullCheckRight;
	}
	if (cmp)
		return (0);
	return (1);
}

/**
 * binary_tree_is_perfect - check if balanced and full
 * @tree: root node to check perfectness w respect to
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balCheck = 0, fulCheck = 0;

	if (!(tree))
		return (0);

	balCheck = binary_tree_balance(tree);
	fulCheck = binary_tree_is_full(tree);
	if (fulCheck != 1 || balCheck != 0)
		return (0);
	else
		return (1);
}
