#include "holberton.h"
/**
 * *_strstr - locate a substring
 * @haystack: Type char
 * @needle: Type char
 * Return: 0.
 */
char *_strstr(char *haystack, char *needle)
{
	const char *s, *t;

	if (!haystack || !needle)
		return (0);

	if (!*needle)
		return ((char *)haystack);
	for (; *haystack; haystack++)
	{
		if (*haystack == *needle)
		{
			t = haystack;
			s = needle;
			for (; *t; s++, t++)
			{
				if (*t != *s)
					break;
			}
			if (!*s)
				return ((char *)haystack);
		}
	}
	return (0);
}
