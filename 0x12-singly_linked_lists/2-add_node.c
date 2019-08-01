#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer.
 * @str: string.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int i;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	temp->len = i;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
