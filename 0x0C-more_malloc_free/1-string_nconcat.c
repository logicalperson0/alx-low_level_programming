#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - fun that concatenates two strings.
 * @s1: parameter
 * @s2: parameter
 * @n:parameter
 * Return: ptr which contains s1 followed by n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 != NULL)
	{
		while (s1[j] != '\0')
			j++;
	}
	if (s2 != NULL)
	{
		while (s2[i] != '\0')
			i++;
	}

	if (n >= i)
	{
		ptr = malloc(sizeof(*ptr) * (i + j + 1));
		if (ptr == NULL)
			return (NULL);
		for (k = 0; k < j; k++)
			ptr[k] = s1[k];
		for (k = 0; k < i; k++)
			ptr[k + j] = s2[k];
	}
	else
	{
		ptr = malloc(sizeof(*ptr) * (j + n));
		if (ptr == NULL)
			return (NULL);
		for (k = 0; k < j; k++)
			ptr[k] = s1[k];
		for (k = 0; k < n; k++)
			ptr[k + j] = s2[k];
	}
	ptr[k + j] = '\0';
	return (ptr);
}
