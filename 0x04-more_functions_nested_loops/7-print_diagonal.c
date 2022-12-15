#include "main.h"
/**
 * print_diagonal - draws a straight line
 *
 * @n: A character in ASCII code
 *
 * Return: void function
 */
void print_diagonal(int n)
{
	int i, j, k;

	i = 0;
	j = 92;
	k = 32;

	while (i < n)
	{
		int l;

		l = 0;

		while (l < i)
		{
			_putchar(k);
			l++;
		}
		_putchar(j);

		if (i < (n - 1))
		{
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}
