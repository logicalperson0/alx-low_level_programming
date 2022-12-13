#include "main.h"
/**
 * jack_bauer - void function that prints the time from
 * 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	i = j = k = l = 48;

	while (i < 51)
	{
		j = 48;
		while (j < 52)
		{
			k = 48;
			while (k < 54)
			{
				l = 48;
				while (l < 58)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
