#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *next;
	unsigned long int idx;

	if (ht == NULL)
		return;
	for (idx = 0; idx < ht->size; idx++)
		for (ptr = ht->array[idx]; ptr != NULL; ptr = next)
		{
			next = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}
	free(ht->array);
	free(ht);
}
