#include <stdio.h>

/**
 * main - prime_factora of numbers
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	long int i = 612852475143;
	int o;

	for (o = 2; o <= i; o++)
	{
		if (i % o == 0)
		{
			i /= o;
			o--;
		}

	}
	printf("%d\n", o);
	return (0);
}
