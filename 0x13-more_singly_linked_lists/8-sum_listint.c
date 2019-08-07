#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data (n) of a list.
 * @head: Pointer to first node.
 * Return: Return the sum of all data.
 */
int sum_listint(listint_t *head)
{
	unsigned int a;
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);
	for (a = 0; head != NULL; a++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
