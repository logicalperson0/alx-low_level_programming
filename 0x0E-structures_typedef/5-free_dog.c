#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a fun that frees dogs
 * @d: parameter
 * void fun
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
