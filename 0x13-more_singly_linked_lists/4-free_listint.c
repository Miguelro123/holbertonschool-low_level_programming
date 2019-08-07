#include "lists.h"
/**
 * free_listint - Free a list.
 *
 * @head: Pointer to list.
 *
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
