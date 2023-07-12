#include "search_algos.h"

/**
 *binary_search -searches for a value in a sorted array of
 *integers using the Binary search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: value to search for
 *
 *Return: index where value is located, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i = 0, j = size - 1, m, n;

	if (array == NULL)
		return (-1);

	while (i <= j)
	{
		printf("Searching in array: ");

		for (n = i; n < j; n++)
			printf("%d, ", array[n]);
		printf("%d\n", array[n]);

		m = ((i + j) / 2);

		if (array[m] < value)
			i = m + 1;

		else if (array[m] > value)
			j = m - 1;

		else
			return (m);
	}
	return (-1);
}
