#include "lists.h"
/**
 * *insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: Pointer to node in the list.
 * @idx: The index of the list.
 * @n: Data that goes inside the node.
 *
 * Return: The list of node inserts new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int a;

	temp = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if ((idx) == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (a = 0; a < idx - 1; a++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
