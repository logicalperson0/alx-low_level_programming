#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @a: The character in ASCII code
 *
 * Return: 1 or -1 for n different than 0. 0 for the rest.
 */
int print_last_digit(int a)
{
	int i;

	i = a % 10;

	if (i >= 0)
	{
		_putchar(i + 48);
		return (i);
	}
	else
	{
		_putchar(-i + 48);
		return (-i);
	}
}
