#include "holberton.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: Type int
 * @b: Type int
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
