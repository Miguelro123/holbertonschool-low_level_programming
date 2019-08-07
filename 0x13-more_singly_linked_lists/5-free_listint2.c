#include "lists.h"
/**
 * free_listint2 - Frees a list.
 * @head: Pointer to first node.
 */
void free_listint2(listint_t **head)
{
	listint_t *tem;
	listint_t *cur;

	if (head == NULL)
		return;

	if (*head == NULL)
		return;
	tem = *head;
	while (tem != NULL)
	{
		cur = tem;
		tem = tem->next;
		free(cur);
	}
	*head = NULL;
}
