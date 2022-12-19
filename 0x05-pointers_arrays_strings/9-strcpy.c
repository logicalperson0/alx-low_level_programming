#include "main.h"
/**
 * _strcpy - a fun that copies the str
 *
 * @dest: copy to this parameter
 * @src: the parameter that provides the str
 *
 * Return: the copied array of str
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
	_putchar('\n');
}
