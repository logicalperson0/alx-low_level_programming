#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int z;

	i = 0;
	j = 1;
	z = 2;

	while (i < 8)
	{
		j = 1;
		while (j < 9)
		{
			if (i != j && i < j)
			{
				z = 2;
				while (z < 10)
				{
					if (j != z && j < z)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(z + '0');
						if (i == 7 && j == 8 && z == 9)
						{
							break;
						}
						putchar(',');
						putchar(' ');
					}
					z++;
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
