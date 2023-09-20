#include "main.h"
#include "_putchar.h"
#include <string.h>

/**
 * _strcat - concatenates strings
 * @dest:string to be concatenated to
 * @src:string to be concatenated from
 *
 * Return:concat.
 */
char *_strcat(char *dest, char *src)
{
	char *concat;

	concat = strcat(dest, src);

	return (concat);
}
