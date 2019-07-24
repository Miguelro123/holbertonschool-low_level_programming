#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - Function that creates an array of integers
 * @min: int type
 * @max: int type
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int range, a;
	int *p;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	p = malloc(sizeof(int) * range);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < range; a++, min++)
	{
		p[a] = min;
	}

	return (p);
}
