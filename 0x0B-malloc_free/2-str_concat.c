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
	int size;
	char *str;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	size = strlen(s1) + strlen(s2) + 1;
	str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(str, s1);
	strcat(str, s2);
	return (str);
}
