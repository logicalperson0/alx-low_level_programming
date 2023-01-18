#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array.
 * @array: parameter
 * @size: parameter
 * @action: fun ptr parameter
 * void fun
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
