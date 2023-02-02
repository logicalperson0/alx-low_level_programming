#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 *
 * @n: parameter
 * @m: parameter
 * Return: num of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, j = 0;
	int x, y;

	while (i <= 63)
	{
		x = n & 1;
		y = m & 1;

		if (x != y)
			j++;

		n = n >> 1;
		m = m >> 1;
		i++;
	}
	return (j);
}
