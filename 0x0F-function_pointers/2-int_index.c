#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @array: Pointer to array of int type
 * @size: Size of array of int type
 * @cmp: Pointer to function of int type
 * Return: Return index number of comp int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (z = 0; z < size; z++)
	{
		if (cmp(array[z]) != 0)
			return (z);
	}
	return (-1);
}
