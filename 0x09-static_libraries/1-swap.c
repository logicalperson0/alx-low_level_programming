#include "main.h"

/**
 * swap_int - a fun that swaps 2 int
 *
 * @a: a ASCII char
 * @b: a ASCII char
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
