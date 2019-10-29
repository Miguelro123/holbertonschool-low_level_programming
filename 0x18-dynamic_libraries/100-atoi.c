#include "holberton.h"
/**
 * _atoi - Function that convert a string to an integer
 * @s: String to be converted an integer
 * Return: Integer value
 */
int _atoi(char *s)

{
	int x = 0, i = 0, minus = -1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			minus *= -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
		x = (x * 10) - (s[i++] - '0');

	return (x * minus);
}
