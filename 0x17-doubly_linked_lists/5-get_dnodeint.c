#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a linked list.
 * @head: Head of the list.
 * @index: Index of the node.
 * Return: NULL if the node doest exist or the index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int z;

	for (z = 0; z < index; z++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
