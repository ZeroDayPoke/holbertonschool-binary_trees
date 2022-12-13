#include "binary_trees.h"

/**
 * binary_tree_node - creates new node for tree
 * @value: newNode intended value
 * @parent: parent node of node to be created
 * Return: pointer to newNode or NULL on fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!(newNode))
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;
	return (newNode);
}
