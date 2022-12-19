#include "main.h"
/**
 * puts_half - prints hlaf of a str
 *
 * @str: A parameter of the void fun
 */
void puts_half(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}
	if (i % 2 == 0)
	{
		int j = i / 2;

		while (j <= i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		int k = (i - 1) / 2;

		while (k <= i)
		{
			_putchar(str[k]);
			k++;
		}
	}
	_putchar('\n');
}
