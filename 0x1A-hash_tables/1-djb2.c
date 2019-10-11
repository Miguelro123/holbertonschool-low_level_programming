#include "hash_tables.h"
/**
 * hash_djb2 - Hash function.
 * @str: String.
 * Return: Hash value of @str.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int count;

	while ((count = *str++))
		hash = ((hash << 5) + hash) + count; /*hash * 33 + count*/
	return (hash);
}
