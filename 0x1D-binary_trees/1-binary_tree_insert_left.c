#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function that inserts a node as the left-child of another node.
 * @parent: Pointer to node addition.
 * @value: Value to be added.
 * Return: Return pointer to new node added.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode  = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = newNode;
		newNode->left = NULL;
	}
	else
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
		parent->left = newNode;
	}
	return (newNode);

}
