#include "main.h"
/**
 * print_sign - Shows 1 if the input is
 * greater than zero, -1 if less than zero. Another cases, shows
 * 0
 *
 * @n: The character in ASCII code
 *
 * Return: 1 or -1 for n different than 0. 0 for the rest.
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
