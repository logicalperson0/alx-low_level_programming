#include "main.h"

/**
 * _strstr - a function that locates a substring.
 *
 * @haystack: the str that is to find a sequence of str
 * @needle: the str to compare to for a sequence
 *
 * Return: pointer to beginning of the located substr
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[0])
		{
			if (haystack[i + j] == needle[j])
					j++;
			else
				break;
		}
		if (needle[j] != '\0')
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
