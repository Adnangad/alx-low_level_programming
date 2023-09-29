#include "main.h"
#include <string.h>

/**
 * _strspn - gets length of prefix substring
 * @s:string
 * @accept:prefix substring
 *
 * Return:no of bytes in initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int result = strspn(s, accept);

	return (result);
}
