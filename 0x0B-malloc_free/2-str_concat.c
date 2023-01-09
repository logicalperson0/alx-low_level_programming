#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: 1st parameter str
 * @s2: 2nd parameter str
 * Return: ptr to newly allocated mem in heap
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}
	ptr = (char *)malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < (i); n++)
	{
		ptr[n] = s1[n];
	}
	for (n = 0; n < j; n++)
		ptr[n + i] = s2[n];
	return (ptr);
}
