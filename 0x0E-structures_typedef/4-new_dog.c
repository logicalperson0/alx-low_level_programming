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
	int i = 0, j = 0, k;

	new = malloc(sizeof(*new));
	if (new == NULL || name == NULL || owner == NULL)
	{
		free(new);
		return (NULL);
	}
	while (name[i] != '\0')
		i++;
	while (owner[i] != '\0')
		j++;
	new->name = malloc(i + 1);
	new->owner = malloc(j + 1);
	if (new->name == NULL)
	{
		free(new->name);
		return (NULL);
	}
	if (new->owner == NULL)
	{
		free(new->owner);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		new->name[k] = name[k];
	new->age = age;
	for (k = 0; k < j; k++)
		new->owner[k] = owner[k];
	return (new);
}
