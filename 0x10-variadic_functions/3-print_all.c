#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * p_char - print characters
 * @c: character
 */
void p_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * p_int - print integers
 * @i: integer
 */
void p_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * p_float - print float
 * @f: float to print
 */
void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * p_string - print strings
 * @s: string
 */
void p_string(va_list s)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *separador;
	va_list argp;
	v_types valid_types[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string}
	};

	i = j = 0;
	separador = "";
	va_start(argp, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *valid_types[j].valid)
			{
				printf("%s", separador);
				valid_types[j].f(argp);
				separador = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
