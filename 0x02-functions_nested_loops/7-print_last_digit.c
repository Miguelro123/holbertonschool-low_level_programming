#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: variable type int.
 * Return: 0.
 */
int print_last_digit(int n)
{
	int ln = n % 10;

	if (n < 0)
		ln = ln * -1;
	_putchar(ln + '0');
	return (ln);
}
