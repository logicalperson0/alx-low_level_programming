#include "main.h"

/**
 * _strncat - fun that concatenates a str
 *
 * @dest: the dest for the concatenated str
 * @src: the parameter of the other str
 * @n: is a ASCII char
 *
 * Return: ptr to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (i >= 0)
	{
		if (dest[i] == '\0')
			break;
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src [j];
		i++;
	}
	return (dest);
}
