#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: char type
 * @s2: char type
 * Return: Pointer to allocated memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *cat_ar;
	unsigned int i, j, cp, r, final_leng;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	final_leng = i + j + 1;

	cat_ar = malloc(final_leng * sizeof(char));

	if (cat_ar == NULL)
		return (NULL);

	for (cp = 0; cp < i; cp++)
	{
		cat_ar[cp] = s1[cp];
	}
	for (r = 0; r < j; cp++, r++)
	{
		cat_ar[cp] = s2[r];
	}
	cat_ar[final_leng] = s2[r];

	return (cat_ar);
}
