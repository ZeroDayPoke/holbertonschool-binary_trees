#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left bb of parent
 * @value: left bb value
 * @parent: parent of bb
 * Return: pointer to newNode bb or NULL on bad magic
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	/* if parent has lefty make newNode parent */
	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
