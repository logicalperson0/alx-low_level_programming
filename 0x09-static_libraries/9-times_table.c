#include "main.h"
/**
 * times_table - void function that prints the multiple of 9 from
 * 0 to 81
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	i = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			int k;

			k = i * j;
			if (k <= 9)
			{
				if (j > 0)
					_putchar(' ');
				_putchar(k + 48);
				if (j == 9)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
				if (j == 9)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}

