#include "sort.h"

/**
 * selection_sort - sorts an array of integers in asc order
 *
 * @array: array of integers
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t min = 0;
	int swap;

	if (size > 0 && array != NULL)
	{
		for (i = 0; i < size - 1; i++)
		{
			min = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[min] > array[j])
					min = j;
			}
			swap = array[min];
			array[min] = array[i];
			if (array[i] != swap)
			{
				array[i] = swap;
				print_array(array, size);
			}
		}
	}
}
