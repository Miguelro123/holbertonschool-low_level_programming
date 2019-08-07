#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to first node.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	if (head == NULL)
		return (NULL);
	for (; *head != NULL; *head = next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
	}
	*head = prev;
	return (*head);
}
