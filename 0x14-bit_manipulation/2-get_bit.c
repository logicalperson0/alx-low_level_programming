#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: parameter
 * @index: parameter
 *
 * done for a 64-bit machine
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	unsigned int j = 0;

	i = n;

	if (i != 0)
	{
		while (j <= 63)
		{
			if (j == index)
			{
				if ((i & 1) == 0)
					return (0);
				else
					return (1);
			}
			j++;
			i = i >> 1;
		}
	}
	else if (i == 0 && index < 64)
		return (0);
	return (-1);
}
