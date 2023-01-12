#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: The parameter for the fun
 * Return: ptr to the memory in heap
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(*ptr) * b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
