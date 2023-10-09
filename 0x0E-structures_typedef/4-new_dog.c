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
	int size_name = strlen(name) + 1;
	int size_own = strlen(owner) + 1;
	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->name = malloc(size_name);
	new->owner = malloc(size_own);

	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		return (NULL);
	}
	strcpy(new->name, name);
	strcpy(new->owner, owner);
	new->age = age;

	return (new);
}
