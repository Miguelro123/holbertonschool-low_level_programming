#include "holberton.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: Type char
 *
 * @src: Type char
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}
