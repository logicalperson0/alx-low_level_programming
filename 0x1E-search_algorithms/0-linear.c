#include "search_algos.h"

/**
 *linear_search - function that searches for a value in an array of
 *integers using the Linear search algorithm
 *
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: value to search for
 *
 *Return: 1si index, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
