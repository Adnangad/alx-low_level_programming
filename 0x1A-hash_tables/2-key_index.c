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
	unsigned long int hash = hash_djb2(key);
	unsigned long int idx = hash % size;
	return (idx);
}
