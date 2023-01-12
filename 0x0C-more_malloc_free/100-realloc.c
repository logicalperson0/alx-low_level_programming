#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: parameter ptr
 * @old_size: parameter for old size of fun
 * @new_size: parameter for new size of fun
 * Return: ptr to new_size for fun
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *poi;

	if (ptr == NULL)
		poi = malloc(new_size);

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		poi = malloc(new_size);
		free(ptr);
	}
	free(ptr);
	return (poi);
}
