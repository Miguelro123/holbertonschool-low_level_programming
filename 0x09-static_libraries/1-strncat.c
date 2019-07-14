#include "holberton.h"
/**
 * _strncat - concatenate two strings.
 * @dest: Type char
 * @src: Type char
 * @n: Type int
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
