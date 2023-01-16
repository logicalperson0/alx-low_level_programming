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

	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		free (new);
		return (NULL);
	}
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
