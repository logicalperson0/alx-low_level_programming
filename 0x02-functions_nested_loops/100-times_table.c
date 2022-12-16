#include "main.h"
/**
 * print_times_table - void function that prints the multiple of 0 to 15
 *
 *@n: a character of ASCII table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0;

	if (n <= 15 && n >= 0)
	{
		while (i <= n)
		{
			int j = 0;

			while (j <= n)
			{
				int k = i * j;

				if (j > 0)
					_putchar(' ');
				if (k <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar((k % 10) + 48);
				}
				else if (k <= 99)
				{
					_putchar(32);
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
				}
				else
				{
					_putchar(((k / 100) % 10) + 48);
					_putchar(((k / 10) % 10) + 48);
					_putchar((k % 10) + 48);
				}
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
