#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a list.
 * @head: Head of the list.
 * @n: Value of the node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newn = NULL;
	dlistint_t *current = *head;

	newn = malloc(sizeof(dlistint_t));
	if (!newn)
		return (NULL);
	newn->n = n;
	newn->next = NULL;

	if (!*head)
	{
		newn->prev = NULL;
		*head = newn;
		return (newn);
	}

	while (current->next)
		current = current->next;
	current->next = newn;
	newn->prev = current;
	return (newn);
}
