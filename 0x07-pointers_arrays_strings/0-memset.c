#include "main.h"
/**
 * _memset - fun that fills memory with constant byte
 *
 * @s: a ascii char
 * @b: a ascii char
 * @n: a ascuu char
 *
 * Return: Always 0 for success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
