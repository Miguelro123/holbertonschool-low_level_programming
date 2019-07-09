#include "holberton.h"
/**
 * _strchr - locate character in string
 * @s: Type char
 * @c: Type char
 *
 * Return: s + x
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != c)
	{
		if (s[x] == '\0')
			return (0);
		x++;
	}
	return (s + x);
}
