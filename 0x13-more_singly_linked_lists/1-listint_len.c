#include "lists.h"
/**
 * listint_len - Returns the number of a element in a linked list.
 * @h: Pointer to the struct.
 *
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != '\0')
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
