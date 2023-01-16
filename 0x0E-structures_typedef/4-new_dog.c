#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - fun that creates a new dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: ptr to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int i, j, k;

	new_d = malloc(sizeof(*new_d));
	if (new_d == NULL || !(name) || !(owner))
	{
		free(new_d);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		;

	for (j = 0; owner[j]; j++)
		;

	new_d->name = malloc(i + 1);
	new_d->owner = malloc(j + 1);

	if (!(new_d->name) || !(new_d->owner))
	{
		free(new_d->owner);
		free(new_d->name);
		free(new_d);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		new_d->name[k] = name[k];
	new_d->name[k] = '\0';

	new_d->age = age;

	for (k = 0; k < j; k++)
		new_d->owner[k] = owner[k];
	new_d->owner[k] = '\0';

	return (new_d);
}
