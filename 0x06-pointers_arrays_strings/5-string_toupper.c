#include "holberton.h"
/**
 * string_toupper - convert letter to upper or lower case
 * @s: Type char
 * Return: s
 */
char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
	}
	return (s);
}
