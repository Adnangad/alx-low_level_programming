#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associatd with a key
 * @ht:hash table
 * @key:value's key
 *
 * Return:value or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = key_index((const unsigned char*)key, ht->size);

	if (ht->array[idx] != NULL)
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			return (ht->array[idx]->value);
		}
	}
	return (NULL);
}

