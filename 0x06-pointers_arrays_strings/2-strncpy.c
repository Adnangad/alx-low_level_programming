#include "main.h"
#include <string.h>

/**
 * _strncpy:copies strings
 * @dest:string to be copied to
 * @src:string to be copied from
 * @n:max number of bytes from src
 *
 * Return:capy.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *capy = strncpy(dest, src, n);

	return capy;
}
