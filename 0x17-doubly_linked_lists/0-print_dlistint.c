#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list.
 * @h: Head of the list.
 * Return: The number of nodes.
 **/

size_t print_dlistint(const dlistint_t *h)
{

	size_t z;

	for (z = 0; h != NULL; z++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (z);
}
