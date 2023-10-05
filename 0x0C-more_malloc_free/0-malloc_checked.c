#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates mem
 * @b:size of mem to be allocated
 *
 * Return:none.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
