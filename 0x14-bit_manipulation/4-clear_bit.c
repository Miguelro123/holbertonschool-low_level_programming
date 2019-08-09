#include "holberton.h"
/**
 * clear_bit - Sets the value of a bit to 0.
 * @n: Number to be worked.
 * @index: Index of the binary number
 * Return: 1 if it worked or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = ~(1 << index);

	if (index > 63)
		return (-1);

	*n &= i;

	return (1);
}
