#include "main.h"
/**
 * puts_half - prints hlaf of a str
 *
 * @str: A parameter of the void fun
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}
	if (i % 2 == 1)
	{
		j = i / 2;

	}
	else
	{
		j = (i - 1) / 2;

	}
	for (j++; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
