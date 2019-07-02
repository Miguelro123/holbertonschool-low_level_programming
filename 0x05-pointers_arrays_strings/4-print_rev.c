#include "holberton.h"

/**
 * print_rev - prints a string, in reverse.
 * @s: Type char
 */

void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	a--;
	while (s[a] != 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
