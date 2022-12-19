#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an arr of int
 *
 * @a: an ASCII char
 * @n: an ASCII char
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			break;
		printf(", ");
	}
	printf("\n");
}
