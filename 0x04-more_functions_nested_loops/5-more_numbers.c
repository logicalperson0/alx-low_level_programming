#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14
 *
 * Return: void function
 */
void more_numbers(void)
{
	int i, j;

	j = 0;
	i = 0;

	while (i <= 9)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
