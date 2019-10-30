#include "sort.h"
/**
 * selection_sort - Sort an array using selection sort algorithm
 * @array: input array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t minimo = 0, i, j;
	int swap;

	for (i = 0 ; i < size - 1 ; i++)
	{
		minimo = i;

		for (j = i + 1 ; j < size ; j++)
			if (array[minimo] > array[j])
				minimo = j;
		swap = array[minimo];
		array[minimo] = array[i];
		array[i] = swap;
		print_array(array, size);
	}
}
