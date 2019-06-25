#include "holberton.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase.
 * 
 *
 */
void print_alphabet_x10(void)
{
	int z;
	char y;

	for (z = 0; z <= 9; z++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
