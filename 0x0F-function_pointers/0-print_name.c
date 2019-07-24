#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: pointer of char type
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
