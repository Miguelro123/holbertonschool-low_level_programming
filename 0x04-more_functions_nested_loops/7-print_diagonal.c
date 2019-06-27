#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: int type
 *
 * Return: 0
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
