#include "holberton.h"

/**
 * _strncat - function that concatenates two strings using at most `n` bytes
 * @dest: Type char
 * @src: Type char
 * @n: integer
 *
 * Return: pointer to the resulting string dest
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
