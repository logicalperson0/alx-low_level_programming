#include "main.h"

/**
 * _puts_recursion - fun that prints a string
 *
 * @s: a ascii char
 *
 * void function
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}