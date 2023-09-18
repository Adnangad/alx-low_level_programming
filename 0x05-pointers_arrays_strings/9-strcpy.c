#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - copies strings
 * @dest:string to be copied to
 * @src:string to be copied from
 *
 * Return:pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
