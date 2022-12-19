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
	int i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	return (dest);
}
