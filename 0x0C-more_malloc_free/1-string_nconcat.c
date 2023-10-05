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
	int size = strlen(s1) + strlen(s2) + 1;
	char *pointer;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	pointer = (char *)malloc(size * sizeof(char));

	if (pointer == NULL)
	{
		return (NULL);
	}
	strcpy(pointer, s1);
	if (n >= strlen(s2))
	{
		strcat(pointer, s2);
	}
	else
	{
		strncat(pointer, s2, n);
	}
	return (pointer);
}
