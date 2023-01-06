#include "main.h"
/**
 * _puts - fun that prints a string
 *
 * @str: A variable of the void fun
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
