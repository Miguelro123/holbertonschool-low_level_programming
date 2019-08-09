#include "holberton.h"
/**
 * set_bit - Sets a bit in given position.
 * @n: Number.
 * @index: Index.
 * Return: number with setted position
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
