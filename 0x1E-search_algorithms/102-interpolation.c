#include "search_algos.h"

/**
 *interpolation_search - searches for a value in a sorted array of
 *integers using the Interpolation search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: value to search for
 *
 *Return: index where value is located, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int pos, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (size > 0)
	{
		pos = low + (((double)(high - low) /
					  (array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%d]", pos);
		if (pos > size)
		{
			printf(" is out of range\n");
			break;
		}
		printf(" = [%d]\n", array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = low + 1;
		if (array[pos] > value)
			high = high - 1;
	}
	return (-1);
}
