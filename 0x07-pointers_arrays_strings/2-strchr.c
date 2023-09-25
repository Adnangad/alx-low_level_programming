#include "main.h"
#include <string.h>

/**
 * _strchr-locates chr in a string
 * @s:string
 * @c:char to be located
 *
 * Return:pointer to first occ or null if
 * not found.
 */
char *_strchr(char *s, char c)
{
	char *result = strchr(s, c);

	if (result == NULL)
	{
		return (NULL);
	}
	else
	{
		return (result);
	}
}
