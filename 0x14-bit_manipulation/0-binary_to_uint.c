#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 *
 * @b: parameter
 * Return: converted num to uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uints = 0;
	int i, k = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);
	i = i - 1;
	while (i >= 0)
	{
		if (b[i] == '1')
			uints = uints + k;
		k *= 2;
		i--;
	}
	return (uints);
}
