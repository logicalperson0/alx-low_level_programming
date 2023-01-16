#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - fun that initialize a variable of type struct dog
 * @d: parameter of struct dog
 * @age: parameter
 * @name:parameter
 * @owner:parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
