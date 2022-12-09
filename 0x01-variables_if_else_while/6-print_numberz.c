#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int bases;

	bases = 0;

	while (bases < 10)
	{
		putchar(bases + '0');
		bases++;
	}
	putchar('\n');
	return (0);
}
