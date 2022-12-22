#include "main.h"

/**
 * reverse_array - rev an array
 *
 * @a: a ascii char
 * @n: a ascii char
 */
void reverse_array(int *a, int n)
{
	int i, j, b;

	for (i = 0; i < (n - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			b = a[j];
			a[j] = *(a + (j - 1));
			*(a + (j - 1)) = b;
		}
	}
}
