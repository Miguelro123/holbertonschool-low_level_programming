#include "holberton.h"
/**
 * leet - encodes a string to 1337
 * @s: Type char
 * Return: s
 */
char *leet(char *s)
{
	int i, j;

	char *s1 = "aeotlAEOTL";
	char *s2 = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (s[i] == s1[j])
				s[i] = s2[j];
		}
	}
	return (s);
}
