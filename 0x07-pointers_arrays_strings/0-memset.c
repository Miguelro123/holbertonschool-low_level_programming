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
	unsigned int i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}

	return (s);
}
