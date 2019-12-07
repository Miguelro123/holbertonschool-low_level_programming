#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function that inserts a node as the left-child of another node.
 * @parent: Pointer to node addition.
 * @value: Value to be added.
 * Return: Return pointer to new node added.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *original;

	if (parent == NULL)
		return (NULL);

	newNode  = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = newNode;
		newNode->left = NULL;
	}
	else
	{
		original = parent->left;
		newNote->left = original;
		original->parent = newNode;
	}
	return (newNode);

}
