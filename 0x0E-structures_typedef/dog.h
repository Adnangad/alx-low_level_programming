#ifndef DOG_H
#define DOG_H
/**
 * struct dog - contains details of a dog
 * @name:dogs name
 * @age:dogs age
 * @owner:dogs owner
 *
 * Description: i assign info based on given data types
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
