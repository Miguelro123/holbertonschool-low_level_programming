#include "holberton.h"
/**
 * _isalpha - alphabetic character.
 * @c: Variable type int
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
