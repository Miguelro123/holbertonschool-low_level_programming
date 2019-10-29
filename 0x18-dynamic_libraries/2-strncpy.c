#include "holberton.h"
/**
 * _strncpy - copy a string
 * @dest: Type char
 * @src: Type char
 * @n: Type int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z = 0;

	for (z = 0; z < n && src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}
	for (z = z; z < n; z++)
	{
		dest[z] = '\0';
	}
	return (dest);
}
