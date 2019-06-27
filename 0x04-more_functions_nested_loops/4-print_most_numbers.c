#include "holberton.h"

/**
 * print_most_numbers - Print numbers 0 to 9, minus 2 and 4.
 * Description: use only _putchar
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
