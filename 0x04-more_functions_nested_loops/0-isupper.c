#include "holberton.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: Type int
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
