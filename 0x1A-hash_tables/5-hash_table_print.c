#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht:the hash table
 *
 * Return:none
 */
void hash_table_print(const hash_table_t *ht)
{
	int i = 0;
	unsigned long int j;
	hash_node_t *tp;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		tp = ht->array[j];

		while (tp != NULL)
		{
			if (i > 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", tp->key, tp->value);
			i++;
			tp = tp->next;
		}
	}
	printf("}\n");
}
