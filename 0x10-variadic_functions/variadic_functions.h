#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
/**
 * struct validtypes - defines that representation of the type
 * @valid: the character representing the data type
 * @f: pointer to function
 *
 */
typedef struct validtypes
{
	char *valid;
	void (*f)();
} v_types;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H_ */
