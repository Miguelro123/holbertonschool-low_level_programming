#include "holberton.h"

/**
 * print_diagonal - print backslash diagonally
 * @n: int type
 *
 * Return: prints lines and space to the value of n
 */

void print_diagonal(int n)
{
	int x, z;

	for (x = 1; x <= n; x++)
	{
		for (z = 2; z <= x; z++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
