#include "main.h"

/**
 * is_strlenr -  function that gets to end of str
 * @d: the parameter
 * Return: 1 for success 0 otherwise
 */
int is_strlenr(char *d)
{
	if (d[0] != '\0')
		return (1 + is_strlenr(d + 1));
	return (0);
}
/**
 * compare - the opposite ends of a str
 * @x: parameter
 * @y: parameter
 * @d: parameter
 * Return: 1 for success
 */
int compare(char *d, int x, int y)
{
	if (d[x] == d[y])
	{
		if (x > y / 2)
			return (1);
		else
			return (compare(d, x + 1, y - 1));
	}
	return (0);
}
/**
 * is_palindrome -  function that returns 1 if a string is a palindrome
 * @s: the parameter
 * Return: 1 for success 0 otherwise
 */
int is_palindrome(char *s)
{
		return (compare(s, 0, is_strlenr(s) - 1));
}
