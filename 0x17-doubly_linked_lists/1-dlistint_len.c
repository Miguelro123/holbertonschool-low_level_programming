#include "lists.h"

/**
 * print_dlistint - Returns the number of elements in a linked list.
 * @h: Head of the list.
 * Return: The number of the elements in a list.
 **/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *y = h;
	size_t z;

	for (z = 0; y; z++)
	{
		y = y->next;
	}
	return (z);
}
