#include "holberton.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, Do not print 2 and 4
 *
 */
void print_most_numbers(void)
{
	int z;

	z = 0;
	while (z < 10)
	{
		if (z != 2 && z != 4)
			_putchar(z + '0');

		z++;
	}
	_putchar('\n');
}
