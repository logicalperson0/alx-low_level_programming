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
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				int k = i * j;

				_putchar(',');
				_putchar(32);
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
				if (j == n)
					break;
			}
			_putchar('\n');
		}
	}
}