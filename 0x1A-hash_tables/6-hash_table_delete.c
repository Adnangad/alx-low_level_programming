#include "hash_tables.h"

/**
 * hash_table_delete - deletes table
 * @ht:the table to be del
 *
 * Return:none
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tp, *wt;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		tp = ht->array[i];

		while (tp != NULL)
		{
			wt = tp;
			tp = tp->next;

			free(wt->key);
			free(wt->value);
			free(wt);
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
