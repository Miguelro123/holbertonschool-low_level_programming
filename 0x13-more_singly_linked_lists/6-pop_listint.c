#include "lists.h"
/**
 * pop_listint - Deletes the head node of a list.
 * @head: Pointer to first node.
 * Return: n or 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int n;

	if (*head == NULL)
		return (0);
	tem = *head;
	n = tem->n;
	*head = tem->next;
	free(tem);
	return (n);
}
