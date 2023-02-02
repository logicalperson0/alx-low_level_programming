#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian, 1 otherwise
 */
int get_endianness(void)
{
	int i = 8;

	if (*((int *) & i) == 0)
		return (0);
	else
		return (1);
}
