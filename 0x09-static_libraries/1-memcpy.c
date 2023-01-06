#include "main.h"

/**
 * _memcpy - fun that copies memory area
 *
 * @n: a ascii char
 * @dest: the return value of the fun, to copy to
 * @src: the source to copy from
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
