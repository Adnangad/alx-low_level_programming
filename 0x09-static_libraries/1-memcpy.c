#include "main.h"
#include <string.h>

/**
 * _memcpy - copies mem area
 * @dest:mem area to be copied to
 * @src:mem area to be cp from
 * @n:no of bytes to be cp
 *
 * Return:pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
