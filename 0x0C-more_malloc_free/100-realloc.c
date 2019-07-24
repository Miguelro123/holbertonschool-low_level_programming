#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Function that reallocates a memory block using malloc and free
 * @ptr: Pointer
 * @old_size: unsigned int type
 * @new_size: unsigned int type
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		a = malloc(new_size);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		free(ptr);

		a = malloc(new_size);
	}

	return (a);
}
