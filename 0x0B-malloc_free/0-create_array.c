#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size:strlength of c
 * @c:contains string
 *
 * Return:pointer or null.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
}
