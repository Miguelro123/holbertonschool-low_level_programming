#include "holberton.h"
/**
 * _memset - prints buffer in hexa
 * @s: Type char
 * @b: Type char
 * @n: Unsigned int
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
