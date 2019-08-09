#include "holberton.h"
/**
 * get_endianness - Cecks the endianness.
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int x;
	char *ptr;

	x = 1;
	ptr = (char *) &x;

	return ((int)*ptr);
}
