#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: point
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int z;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (z = 0; z < nmemb * size; z++)
		p[z] = 0;

	return (p);
}
