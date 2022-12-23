#include "main.h"

/**
 * print_number - is a fun that prints an int
 *
 * @n: a ascii char
 *
 * void fun
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
