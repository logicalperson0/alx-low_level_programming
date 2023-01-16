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
	dog_t *new;
	int i, j, k;

	new = malloc(sizeof(*new));
	if (new == NULL || !(name) || !(owner))
	{
		free(new);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;

	new->name = malloc(i + 1);
	new->owner = malloc(j + 1);

	if (!(new->name) || !(new->owner))
	{
		free(new->owner);
		free(new->name);
		free(new);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		new->name[k] = name[k];
	new->name[k] = '\0';

	new->age = age;

	for (k = 0; k < j; k++)
		new->owner[k] = owner[k];
	new->owner = '\0';

	return (new);
}
