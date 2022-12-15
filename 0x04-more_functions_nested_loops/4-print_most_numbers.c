#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9
 * except 2 and 4
 *
 * Return: void function
 */
void print_most_numbers(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
