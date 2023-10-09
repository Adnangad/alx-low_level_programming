#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d:pointer
 *
 * Return:none
 */
void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));

	if (d != NULL)
	{
		free(d);
	}
}
