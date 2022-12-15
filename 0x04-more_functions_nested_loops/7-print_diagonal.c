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

	i = 1;
	j = 92;
	k = 32;

	if (i <= n)
	{
		i = 1;
		while (i <= n)
		{
			int l;

			l = 0;
			while (l < i)
			{
				_putchar(k);
				l++;
			}
			_putchar(j);
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
