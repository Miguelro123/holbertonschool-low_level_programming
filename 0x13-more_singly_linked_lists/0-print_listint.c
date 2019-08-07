#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints all the elements of a list.
 * @h: Pointer to the struct.
 * Return: The number.
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != '\0')
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
