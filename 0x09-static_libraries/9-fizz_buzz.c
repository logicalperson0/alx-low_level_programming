#include <stdio.h>

/**
 * main - fizz buzz interview qn
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		int j = i % 3;
		int k = i % 5;
		int l = i % 15;

		if (l == 0)
		{
			printf("FizzBuzz");
			if (i == 100)
				break;
			putchar(' ');
		}
		else if (k == 0)
		{
			printf("Buzz");
			if (i == 100)
				break;
			putchar(' ');
		}
		else if (j == 0)
		{
			printf("Fizz");
			if (i == 100)
				break;
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
