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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
