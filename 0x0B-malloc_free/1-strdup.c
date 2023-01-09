#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory which contains a
 * copy of the string given as a parameter.
 * @str: Parameter for a str
 * Return: ptr to a str
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j = 0;

	while (str[j] != '\0')
		j++;
	ptr = (char *)malloc(j);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (j); i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
