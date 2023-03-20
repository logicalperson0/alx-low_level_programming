#include "main.h"
/**
 * _strcat - fun that cancat 2 str
 *
 * @src: The source of the 1 str to append to dest
 * @dest: The destination of the added str from src
 *
 * Return: ptr to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (i >= 0)
	{
		if (dest[i] == '\0')
			break;
		i++;
	}
	while (j >= 0)
	{
		if (src[j] == '\0')
		{
			break;
		}
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
