#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s:the string in question
 * @accept:the char to be found
 *
 * Return:result.
 */
char *_strpbrk(char *s, char *accept)
{
	char *result = strpbrk(s, accept);

	if (result == NULL)
	{
		return (NULL);
	}
	return (result);
}
