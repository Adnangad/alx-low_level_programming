#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack:string in question
 * @needle:substring to be found
 *
 * Return:result.
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = strstr(haystack, needle);

	if (result == NULL)
	{
		return (NULL);
	}
	else
	{
		return (result);
	}
}
