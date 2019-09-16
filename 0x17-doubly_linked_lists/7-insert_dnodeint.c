#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Head of the list.
 * @idx: Index of the new node.
 * @n: Value of the new node.
 * Return: Address of the new node, NULL if fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *newn = NULL;
	uint i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (current)
	{
		current = current->next;
		i++;
	}
	if (i < idx)
		return (NULL);
	if (idx == i)
		return (add_dnodeint_end(h, n));
	current = *h;
	while (current && current->next)
	{
		if (idx == 0)
			break;
		idx--;
		current = current->next;
	}
	newn = malloc(sizeof(dlistint_t));
	if (!newn)
		return (NULL);
	newn->n = n;

	current->prev->next = newn;
	newn->prev = current->prev;
	current->prev = newn;
	newn->next = current;
	return (newn);
}
