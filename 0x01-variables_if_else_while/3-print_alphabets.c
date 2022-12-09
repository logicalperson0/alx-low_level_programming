#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	char bet;

	alpha = 'a';
	bet = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (bet <= 'Z')
	{
		putchar(bet);
		bet++;
	}
	putchar('\n');
	return (0);
}

