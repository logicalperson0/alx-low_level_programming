#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: parameter
 * @index: parameter
 * for 64-bit
 * Return: 1 for success, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;

	*n = j | *n;

	return (1);
}
