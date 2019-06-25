#include "holberton.h"
/**
 * print_alphabet - prints the alphabet in lowercase.
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}

