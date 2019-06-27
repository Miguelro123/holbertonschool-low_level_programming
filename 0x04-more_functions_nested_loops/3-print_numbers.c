#include "holberton.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * Description: You can only use _putchar twice
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
