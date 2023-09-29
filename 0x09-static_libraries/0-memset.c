#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with const byte
 * @s:char s
 * @b:constant b
 * @n:memory to be filled
 *
 * Return:pointer to mem area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
