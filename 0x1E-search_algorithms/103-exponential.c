#include "search_algos.h"

/**
 *exponential_search -searches for a value in a sorted array of
 *integers using the Exponential search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: value to search for
 *
 *Return: index where value is located, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int i = 1, nxt;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i >= size)
		nxt = size - 1;
	else
		nxt = i;

	printf("Value found between indexes [%d] and [%d]\n", i / 2, nxt);

	return (binary_sear(array, i / 2, nxt, value));
}

/**
 *binary_sear -searches for a value in a sorted array of
 *integers using the binary search algorithm
 *@array: pointer to the first element of the array to search in
 *@nxt: end of array
 *@prev: start of array
 *@value: value to search for
 *
 *Return: index where value is located, otherwise -1
 */
int binary_sear(int *array, size_t prev, size_t nxt, int value)
{
	unsigned int m, i;

	while (nxt >= prev)
	{
		m = ((prev + nxt) / 2);

		printf("Searching in array: ");
		for (i = prev; i < nxt; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		if (array[m] < value)
			prev = m + 1;
		else if (array[m] > value)
			nxt = m - 1;

		else
			return (m);
	}
	return (-1);
}
