#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - fun that adds 2 int nums
 *
 * @a: parameter for 1st int num
 * @b: parameter for 2nd int num
 *
 * Return: the fun that is chosen; the answer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - fun that subtracts 2 int nums
 * @a: parameter for 1st int num
 * @b: parameter for 2nd int num
 *
 * Return: the fun that is chosen; the answer
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiples
 * @a: parameter for 1st int num
 * @b: parameter for 2nd int num
 *
 * Return: the fun that is chosen; the answer
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides
 * @a: parameter for 1st int num
 * @b: parameter for 2nd int num
 *
 * Return: the fun that is chosen; the answer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - reminder
 * @a: parameter for 1st int num
 * @b: parameter for 2nd int num
 *
 * Return: the fun that is chosen; the answer
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
