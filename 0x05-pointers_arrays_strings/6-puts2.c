#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: Type char
 */

void puts2(char *str)
{
	int z;

	for (z = 0; str[z] != '\0'; z++)
	{
		if (z % 2 == 0)
			_putchar(str[z]);
	}
	_putchar('\n');
}
