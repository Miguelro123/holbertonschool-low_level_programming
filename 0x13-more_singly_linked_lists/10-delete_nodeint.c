#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index index of a list.
 * @head: The head node.
 * @index: Index given by main.
 * Return: @1 if success @-1 if paila
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *before;
	unsigned int j = 0;

	if (index == 0)
	{
		tmp = *head;
		if (*head == NULL)
			return (-1);
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	before = *head;
	while (j < index)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		if (j < index - 1)
			before = before->next;
		j++;
	}
	before->next = tmp->next;
	free(tmp);
	return (1);
}
