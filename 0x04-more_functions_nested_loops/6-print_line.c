#include "holberton.h"

/**
 * print_line - draws a straight line.
 * @n: Type int
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
