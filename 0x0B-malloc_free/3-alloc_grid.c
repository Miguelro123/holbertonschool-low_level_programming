#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int type
 * @height: int type
 * Return: Pointer to a 2 dimensional array of integrers.
 */
int **alloc_grid(int width, int height)
{
	int **grid_a;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid_a = malloc(height * sizeof(int *));

	if (grid_a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid_a[i] = malloc(width * sizeof(int));
		if (grid_a[i] == NULL)
		{
			for (k = i - 1; k >= 0; k--)
				free(grid_a[k]);
			free(grid_a);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid_a[i][j] = 0;
	}
	return (grid_a);
}
