#include "holberton.h"

/**
 * print_square - print hashes in pattern of size
 * @size: int type
 *
 * Return: prints hashes in squares
 */

void print_square(int size)
{
	int y, z;

	for (z = 1; z <= size; z++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
