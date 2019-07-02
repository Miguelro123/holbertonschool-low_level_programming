#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: Type char
 * Return: half
 */


void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{

	}
	a++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
