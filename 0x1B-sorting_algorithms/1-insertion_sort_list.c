#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in asc order
 * @list: list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prevnode, *nxnode, *current = NULL;

	if (list != NULL && (*list)->next != NULL)
	{
		current = (*list)->next;
		prevnode = current->prev;
		nxnode = current->next;
		while (current != NULL)
		{
			while (prevnode != NULL && prevnode->n > current->n)
			{
				current->next = prevnode;
				current->prev = prevnode->prev;
				if (prevnode->prev != NULL)
					(prevnode->prev)->next = current;
				prevnode->prev = current;
				prevnode->next = nxnode;
				if (nxnode != NULL)
					nxnode->prev = prevnode;
				nxnode = prevnode;
				prevnode = current->prev;
				if ((*list)->prev != NULL)
					*list = (*list)->prev;
				print_list(*list);
			}
			current = nxnode;
			if (current != NULL)
			{
				nxnode = current->next;
				prevnode = current->prev;
			}
		}
	}
}
