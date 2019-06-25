#include "holberton.h"
/**
 * _islower - checks for lowercase character.
 * @c: takes in a character.
 * Return: 1 if c is lowercase; 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
