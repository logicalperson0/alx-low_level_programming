#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base_10;

	base_10 = 0;

	while (base_10 < 10)
	{
		printf("%d", base_10);
		base_10++;
	}
	putchar('\n');
	return (0);
}
