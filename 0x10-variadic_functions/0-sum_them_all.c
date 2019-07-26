#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters.
 * @n: const unsigned int type.
 * Return: sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
