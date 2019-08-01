#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: pointer.
 */
void free_list(list_t *head)
{
	list_t *cursor;

	while (head != NULL)
	{
		cursor = head;
		head = head->next;
		free(cursor->str);
		free(cursor);
	}
	free(head);
}
