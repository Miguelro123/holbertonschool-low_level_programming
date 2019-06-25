#include "holberton.h"
/**
 * _abs - the absolute value of an integer.
 * @n: variable type int.
 * Return: absolute value.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
