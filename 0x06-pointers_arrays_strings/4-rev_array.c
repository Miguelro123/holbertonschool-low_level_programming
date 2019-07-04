#include "holberton.h"
/**
 * reverse_array - reverses the array elements.
 * @a: Type int
 * @n: Type int
 * Return: The destiny
 */
void reverse_array(int *a, int n)
{
	int ld, z, temp;

	z = 0;
	ld = n - 1;

	while (z <= ld)
	{
		temp = a[ld];
		a[ld] = a[z];
		a[z] = temp;
		z++;
		ld--;
	}
}
