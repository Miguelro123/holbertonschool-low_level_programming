#include "holberton.h"
/**
 * flip_bits - Function that returns the number of bits.
 * @n: First number.
 * @m: Second number.
 * Return: Number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int s = n ^ m, count;

	for (count = 0; s > 0; s >>= 1)
	{
		if (s & 1)
			count++;
	}

	return (count);
}
