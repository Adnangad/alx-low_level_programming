#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates mem of an array
 * @nmemb:no of elements
 * @size:size of elements
 *
 * Return:none.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *point;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	point = (void *)malloc(nmemb * size);

	if (point == NULL)
	{
		return (NULL);
	}
	memset(point, 0, nmemb * size);
	return (point);
}
