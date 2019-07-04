#include "holberton.h"
/**
 * rot13 - encodes string to rot13
 * @s: Type char
 * Return: s
 */
char *rot13(char *s)
{
	int x, z;

	char *s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (z = 0; s1[z] != '\0'; z++)
		{
			if (s[x] == s1[z])
			{
				s[x] = s2[z];
				break;
			}

		}
	}
	return (s);
}
