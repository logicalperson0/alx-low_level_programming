#include "main.h"

/**
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	int lower;

	lower = 97;

	while (lower < 123)
	{
		if (c == lower)
		{
			break;
		}
		lower++;
	}
	if (c == lower)
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n');
}
