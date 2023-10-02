#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a space in mem
 * @str:str to be duplicated
 *
 * Return:pointer.
 */
char *_strdup(char *str)
{
	int size;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str) + 1;
	duplicate = (char *)malloc(size * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
