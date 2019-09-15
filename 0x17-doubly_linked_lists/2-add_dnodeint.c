#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list.
 *
 * @head: Head of list.
 * @n: Value of the new node.
 *
 * Return: NULL if fail, or pointer to new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newn;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;
	newn->next = *head;
	if (*head != NULL)
		(*head)->prev = newn;
	newn->prev = NULL;
	*head = newn;
	return (newn);
}
