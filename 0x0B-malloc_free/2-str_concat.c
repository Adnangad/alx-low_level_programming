#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - returns pointer to mem
 * @s1:str to be concat to
 * @s2:sttr to be concat from
 *
 * Return:concat.
 */
char *str_concat(char *s1, char *s2)
{
	int size = strlen(s1) + strlen(s2);
	char *str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(str, s1);
	strcat(str, s2);
	return (str);
}
