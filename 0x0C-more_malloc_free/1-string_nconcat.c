#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1:str to be conc to
 * @s2:str to be concat from
 * @n:no of bytes to be concat
 *
 * Return:pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len;
	char *pointer;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		len = strlen(s2);
	}
	else if (n < strlen(s2))
	{
		len = n;
	}
	pointer = (char *)malloc(strlen(s1) + len + 1);

	if (pointer == NULL)
	{
		return (NULL);
	}
	strcpy(pointer, s1);
	strncat(pointer, s2, len);
	return (pointer);
}
