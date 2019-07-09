#include "holberton.h"
/**
 * *_strpbrk - search a string for any of a set of bytes
 *
 * @s: Type char
 * @accept: Type char
 *
 * Return: 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int c;
	int d;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (s[c] == accept[d])
				return (&s[c]);
		}
	}
	return (0);
}
