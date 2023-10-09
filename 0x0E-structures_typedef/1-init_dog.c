#include "dog.h"
#include <string.h>

/**
 * init_dog - initializes a var
 *
 * @d:struct name
 * @name:dog name
 * @age:dogs age
 * @owner:owners age
 *
 * Description:initializes struct dog with provided data
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		if (name == NULL)
		{
			name = NULL;
		}
		else
		{
			d -> name = strdup(name);
		}
		d -> age = age;
		if (owner == NULL)
		{
			owner = NULL;
		}
		else
		{
			d -> owner = strdup(owner);
		}
	}
}
