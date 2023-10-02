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
	int size = strlen(str);
	char *duplicate = (char *)malloc(size * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	if (str == NULL)
	{
		return (NULL);
	}
	return (duplicate);
}
