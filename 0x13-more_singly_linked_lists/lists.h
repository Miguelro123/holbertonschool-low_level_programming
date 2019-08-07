#ifndef _LISTS_
#define _LISTS_
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
size_t print_listint(const listint_t *h);
#endif
