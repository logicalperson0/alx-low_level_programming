#include "main.h"
#include <stdio.h>

/**
 *  print_diagsums - prints the sum of the 2 diagonals
 *  of a square matrix
 *
 *  @a: a ascii char
 *  @size: a parameter for the number of rows and columns
 *
 *  void fun
 */
void print_diagsums(int *a, int size)
{
	int x, j, count, l = 0, k = 0;

	for (x = 0; x < size; x++)
	{
		count = (x * size) + x;
		l += a[count];
	}
	for (j = 0; j < size; j++)
	{
		count = (j * size) + (size - 1 - j);
		k += a[count];
	}
	printf("%i, %i\n", l, k);
}
