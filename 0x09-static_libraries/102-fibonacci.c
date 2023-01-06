#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, k, l;

	i = 1;
	j = 2;

	printf("%ld, %ld", i, j);

	for (k = 0; k < 48; k++)
	{
		l = i + j;
		printf(", %ld", l);
		i = j;
		j = l;
	}
	printf("\n");
	return (0);
}
