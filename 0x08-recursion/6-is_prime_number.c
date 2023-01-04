#include "main.h"

/**
 * prime - returns 1 if not sqrt and 0 otherwise
 *
 * @x: parameter for prime
 * @y: parameter for prime
 * Return: 1 for success 0 otherwise
 */
int prime(int x, int y)
{
	if (x * x == y)
		return (0);
	if (x * x > y)
		return (1);
	return (prime(x + 1, y));
}

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: the parameter
 *
 * Return: 1 for success else 0
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
		return (0);
	else if (n < 0)
		return (0);
	else
		return (prime(1, n));
}
