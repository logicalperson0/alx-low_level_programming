#include "main.h"

/**
 * _strncpy - copies a str
 *
 * @dest: the parameter that is copied to
 * @src: the source to copy from
 * @n: A ascii char
 * Return: the ptr to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
