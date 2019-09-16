#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data (n) of a linked list.
 * @head: Head of the list.
 * Return: Sum of list elements. 0 if no list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
