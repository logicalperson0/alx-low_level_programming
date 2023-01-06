#include "main.h"
/**
 * print_rev - fun that prints str in reverse
 *
 * @s: A ASCII char
 */
void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
		for (i--; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	_putchar('\n');
}
