#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex;
	int hex2;

	hex = 'a';
	hex2 = 0;

	while (hex2 < 10)
	{
		putchar(hex2 + '0');
		hex2++;
	}
	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}

