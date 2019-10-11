#include "hash_tables.h"
/**
 * hash_table_print - Prints hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	unsigned int check = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (check == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			check = 1;
			temp = temp->next;
		}
		index++;
	}
	printf("}\n");
}
