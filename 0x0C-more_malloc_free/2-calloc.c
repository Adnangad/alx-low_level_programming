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
	void *point = (void *)calloc(nmemb, size);

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	return (point);
}
