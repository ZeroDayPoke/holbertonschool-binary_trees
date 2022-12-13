#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right bb of parent
 * @value: right bb value
 * @parent: parent of bb
 * Return: pointer to newNode bb or NULL on bad magic
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	/* no unsupervised nodes */
	if (!parent)
		return (NULL);

	/* malloc da bb and check if bad magic */
	newNode = malloc(sizeof(binary_tree_t));
	if (!(newNode))
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;

	/* if parent has righty make newNode parent */
	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}
