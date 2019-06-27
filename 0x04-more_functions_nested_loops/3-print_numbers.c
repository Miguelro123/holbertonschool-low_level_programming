#include "holberton.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 */
void print_numbers(void)
{
	int z;

	z = 0;
	while (z < 10)
	{
		_putchar(z + '0');
		z++;
	}
	_putchar('\n');
}
