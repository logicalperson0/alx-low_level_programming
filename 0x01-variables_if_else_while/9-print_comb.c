#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int combo;

	combo = 0;

	while (combo < 10)
	{
		putchar(combo + '0');
		combo++;
		if (combo == 10)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
