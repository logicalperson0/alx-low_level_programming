#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: parameter
 * void fun
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	i = n;

	if (i != 0)
	{
		if ((i >> 1) != 0)
			print_binary(i >> 1);

		if ((i & 1) == 0)
			_putchar('0');
		else
			_putchar('1');
	}
	else if (n == 0)
		_putchar ('0');
}
