#include "holberton.h"
/**
 * *_memset - fill memory with a constant byte
 * @s: Type char
 * @b: Type char
 * @n: unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
