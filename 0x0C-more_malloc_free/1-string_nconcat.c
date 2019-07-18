#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: char type
 * @s2: char type
 * @n: unsigned int type
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cont1 = 0, cont2 = 0, i;
	char *p = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[cont1] != '\0')
		cont1++;
	while (s2[cont2] != '\0')
		cont2++;
	if (n >= cont2)
		n = cont2;
	p = malloc(cont1 + n + 1);
	if (!p)
		return (NULL);
	for (i = 0; i < cont1; i++)
	{
		p[i] = s1[i];
	}
	for (i = cont1; i < (cont1 + n); i++)
	{
		p[i] = s2[i - cont1];
	}
	p[i] = '\0';
	return (p);
}
