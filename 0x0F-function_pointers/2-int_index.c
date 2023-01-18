#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: parameter
 * @size: parameter
 * @cmp: fun ptr parameter
 * Return: index of 1st element for which cmp fun doesnt return 0
 * else: return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
