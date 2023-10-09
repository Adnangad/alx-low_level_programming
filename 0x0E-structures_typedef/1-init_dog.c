#include "dog.h"
#include <string.h>

/**
 * init_dog - initializes a var
 * @d:struct name
 * @name:dog name
 * @age:dogs age
 * @owner:owners age
 *
 * Return:none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = strdup(name);
	d ->age = age;
	d -> owner = strdup(owner);
}
