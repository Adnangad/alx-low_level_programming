#include "hash_tables.h"

/**
 * key_index - finds the index of a key
 * @key:the key whose index is to be found
 * @size:the size of array of table
 *
 * Return:index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;
	(void)size;
	idx = hash_djb2(key);
	return (idx);
}
