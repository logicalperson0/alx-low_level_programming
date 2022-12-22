#include "main.h"

/**
 * string_toupper - a fun that changes letters from lower
 * case to upper case
 *
 * @s: a ascii char
 *
 * Return: s to main
 */
char *string_toupper(char *s)
{
	int i = 0, j;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		for (j = 97; j <= 122; j++)
		{
			if (s[i] == j)
			{
				s[i] = (j - 32);
				break;
			}
		}
		i++;
	}
	return (s);
}
