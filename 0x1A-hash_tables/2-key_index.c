#include "hash_tables.h"
/**
 * key_index - Returns key index using djb2 hash value.
 * @key: Key string.
 * @size: Size of hash table.
 * Return: The key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;
	return (i);
}
