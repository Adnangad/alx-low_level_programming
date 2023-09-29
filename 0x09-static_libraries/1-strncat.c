#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates strings
 * @dest:string to be concatenated to
 * @src:string to be conc from
 * @n:bytes from src
 *
 * Return:pointer to can.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *can;

	can = strncat(dest, src, n);

	return (can);
}
