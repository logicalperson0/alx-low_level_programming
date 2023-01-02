#include "main.h"

/**
 * _strchr - fun that locates a char in a str
 *
 * @s: a ascii char
 * @c: a ascii char
 *
 * Return: pointer to 1st occurence
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (c == s[i])
			return (s + i);
		i++;
	}
	return ('\0');
}
