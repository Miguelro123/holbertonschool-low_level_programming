#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list.
 * Return: number.
 */
size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
