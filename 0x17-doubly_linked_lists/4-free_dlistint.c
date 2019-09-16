#include "lists.h"
/**
 * free_dlistint - Free a list.
 * @head: Head of the list.
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_ = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp_);
		temp_ = head;
	}
}
