#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a list.
 * @head: Pointer that points to the struct.
 * @n: Integer in the struct.
 *
 * Return: the adress of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
