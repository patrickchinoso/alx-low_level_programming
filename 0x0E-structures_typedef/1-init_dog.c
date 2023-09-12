#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the variable of type struct dog
 * @d: point to struct dog to initialize
 * @name: name to be determined
 * @age: age to be determined
 * @owner: owner to be determined
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
