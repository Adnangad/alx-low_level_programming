#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name:dogs name
 * @age:dogs age
 * @owner:dogs owner
 *
 * Return:none.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_ow, *new_na;
	int size_name = strlen(name) + 1;
	int size_own = strlen(owner) + 1;
	dog_t *new = malloc(sizeof(dog_t *));

	if (new == NULL)
	{
		return (NULL);
	}
	new_na = malloc(size_name);

	if (new_na == NULL)
	{
		free(new_na);
		return (NULL);
	}
	new_ow = malloc(size_own);

	if (new_ow == NULL)
	{
		free(new_ow);
		return (NULL);
	}
	strcpy(new_na, name);
	strcpy(new_ow, owner);
	new->name = new_na;
	new->age = age;
	new->owner = new_ow;

	return (new);
}
