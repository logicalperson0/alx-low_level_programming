#include "main.h"
/**
 * print_square - draws a straight line
 *
 * @size: the parameter for square
 *
 * Return: void function
 */
void print_square(int size)
{
	int i, j;

	i = 0;
	j = 35;

	while (i < size)
	{
		int k = 0;

		while (k < size)
		{
			_putchar(j);
			k++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
