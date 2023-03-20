#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @a: The character in ASCII code
 *
 * Return: 1 or -1 for n different than 0. 0 for the rest.
 */
int _abs(int a)
{
	if (a < 0)
	{
		int i;

		i = ((-1) * a);
		return (i);
	}
	else
	{
		return (a);
	}
	_putchar('\n');
}
