#include "main.h"
/**
 * print_number - prints an integer
 *
 * @n: A character in ASCII code
 *
 * Return: void function
 */
void print_number(int n)
{
	int i;

	if (n < 10)
	{
		_putchar(n + '0');
		_putchar('\n');
	}
	else if (n >= 10)
	{
		for (i = 1; i <=n; i++)
		{
			if ((n / 10) != 0 && n > 10)
			{
				int j = n % 10;
				_putchar(j + '0');
				n /= 10;
			}
			else if (n < 10)
			{
				_putchar(n + '0');
				break;
			}
			i--;
		}
	}
	_putchar('\n');
}
