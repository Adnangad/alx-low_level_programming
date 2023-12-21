#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size:size of the array
 *
 * Return:pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = calloc(new_table->size, sizeof(hash_node_t *));

	for (i = 0; i < new_table->size; i++)
	{
		new_table->array[i] = NULL;
	}

	return (new_table);
}
