#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function to return index of compared int
 * @array: pointer to array of int type
 * @size: size of array of int type
 * @cmp: pointer to function of int type
 * Return: return index number of comp int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (array == NULL || !cmp || size <= 0)
	{
		return (-1);
	}
	for (z = 0; z < size; z++)
	{
		if (cmp(array[z]) !=0)
			return (z);
	}
	return (-1);
}
