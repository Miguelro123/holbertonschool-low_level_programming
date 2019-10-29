#include "holberton.h"
/**
 * _strcmp - compare two strings
 * @s1: Type char
 * @s2: Type char
 * Return: b
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
	{
		a++;
	}
	b = s1[a] - s2[a];
	return (b);
}
