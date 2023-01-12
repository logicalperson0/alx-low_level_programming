#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: parameter for int min
 * @max: parameter for int max
 * Return: ptr to the arr
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 1; i < ((max - min) + 1); i++)
	{
		ptr[0] = min;
		ptr[i] = ptr[i - 1] + 1;
	}
	return (ptr);
}
