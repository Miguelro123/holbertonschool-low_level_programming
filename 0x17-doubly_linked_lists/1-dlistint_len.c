#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list.
 * @h: Head of the list.
 * Return: The number of the elements in a list.
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t z;

	for (z = 0; h != NULL; z++)
	{
		h = h->next;
	}
	return (z);
}
