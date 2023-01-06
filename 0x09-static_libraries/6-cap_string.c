#include "main.h"

/**
 * cap_string - fun that capitalizes all words of a str
 *
 * @s: ascii char
 *
 * Return: s array to main
 */
char *cap_string(char *s)
{
	int i = 0, j;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[i] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;
	i++;

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i - 1] == sep[j])
			{
				if (s[i] >= 97 && s[i] <= 122)
					s[i] = s[i] - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
