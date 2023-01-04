#include "main.h"

/**
 * sqrtt - fun that returns the numm for a sqrt
 *
 * @x: the num to be returned
 * @y: the sqrt num
 * Return: x
 */
int sqrtt(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (sqrtt(x + 1, y));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: a ascii char
 *
 * Return: sqrt of a natural num
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrtt(1, n));
}
