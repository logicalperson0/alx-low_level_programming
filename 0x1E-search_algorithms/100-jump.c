#include "search_algos.h"
#include <math.h>

/**
 *jump_search -searches for a value in a sorted array of
 *integers using the Jump search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: value to search for
 *
 *Return: index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int jump = 0, i;

	if (array == NULL)
		return (-1);

	while (jump < size)
	{
		printf("Value checked array[%u] = [%d]\n", jump, array[jump]);

		jump = (jump + (sqrt(size)));

		if (array[jump] >= value || jump > size)
		{
			i = (int)(jump - (sqrt(size))) + 1;

			if ((int)jump == (int)(sqrt(size)))
				i = i - 1;
			printf("Value found between indexes [%d] and [%d]\n",
					i, (int)jump);

			jump = i;

			while (jump < size)
			{
				printf("Value checked array[%u] = [%d]\n", jump, array[jump]);

				if (array[jump] == value)
					return (jump);
				jump++;
			}
			return (-1);
		}
	}
	return (-1);
}
