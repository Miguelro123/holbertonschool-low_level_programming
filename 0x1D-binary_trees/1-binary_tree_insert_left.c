B#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function that inserts a node as the left-child of another node.
 * @parent: Pointer to node addition.
 * @value: Value to be added.
 * Return: Return pointer to new node added.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->left)
	{
		temp = parent->left;
		parent->left = new_node;
		new_node->left = temp;
		temp->parent = new_node;
	}
	else
	{
		parent->left = new_node;
	}
	return (new_node);
}
