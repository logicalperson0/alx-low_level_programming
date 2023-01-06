#include "main.h"
/**
 * puts2 - fun that prints every other char
 *
 * @str: A parameter for the fun
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
		else
		{
			i++;
		}
	}
	_putchar('\n');
}
