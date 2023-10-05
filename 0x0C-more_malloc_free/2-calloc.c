#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates mem of an array
 * @nmeb:no of elements
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
	point = (void *)calloc(nmemb, size);

	if (point == NULL)
	{
		return (NULL);
	}
	return (point);
}
