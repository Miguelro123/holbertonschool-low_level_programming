#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 *
 * @array: array of integers
 * @size: size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t tmp = 0;

	if (size > 0 && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
					print_array(array, size);
				}
			}
		}
	}
}
