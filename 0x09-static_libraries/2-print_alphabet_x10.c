#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int alpha;
	int ten;

	ten = 0;
	alpha = 97;
	while (ten < 10)
	{
		alpha = 97;
		while (alpha < 123)
		{
			_putchar(alpha);
			alpha++;
		}
		ten++;
		_putchar('\n');
	}
}
