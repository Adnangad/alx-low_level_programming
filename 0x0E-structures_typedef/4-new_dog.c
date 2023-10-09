#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name:dogs name
 * @age:dogs age
 * @owner:dogs owner
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int size_name = strlen(name) + 1;
	int size_own = strlen(owner) + 1;
	char *new_na = malloc(size_name);
	char *new_ow = malloc(size_own);
	dog_t *new = malloc(sizeof(dog_t *));

	if (new_na == NULL || new_ow == NULL || new == NULL)
	{
		free(new);
		free(new_na);
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
