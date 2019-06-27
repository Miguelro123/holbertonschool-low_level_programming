#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: Type int
 *
 * Return: 0
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
