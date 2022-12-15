#include "main.h"
/**
 * print_line - draws a straight line
 *
 * @n: A character in ASCII code
 *
 * Return: void function
 */
void print_line(int n)
{
	int i, j;

	i = 95;
	j = 1;

	while (j <= n)
	{
		_putchar(i);
		j++;
	}
	_putchar('\n');
}
