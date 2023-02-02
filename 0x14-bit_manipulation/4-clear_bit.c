#include "main.h"

/**
 * clear_bit - unction that sets the value of a bit to 0 at a given index
 * @n: parameter
 * @index: parameter
 *
 * Return: 1 for success, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tra;

	if (index > 63)
		return (-1);

	else
	{
		tra = 1 << index;

		*n  = *n | tra;

		*n = *n ^ tra;

		return (1);
	}
}
