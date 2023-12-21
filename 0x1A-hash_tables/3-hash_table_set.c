#include "hash_tables.h"

/**
 * hash_table_set - inserts a key
 * @ht:the hash table
 * @key:values key
 * @value:keys value
 *
 * Return:1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int idx;

	idx = key_index((const unsigned char*)key, ht->size);

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		return (0);
	}
	if (key == NULL || ht == NULL)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new;
	}
	else
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
	}
	return (1);
}
