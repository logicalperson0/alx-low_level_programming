#include "main.h"

/**
 * rev_string - prints str and rev of str
 *
 * @s: a ASCII char
 */
void rev_string(char *s)
{
	int i = 0;
	char *j;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	j = s;

	for (i--; i >= 0; i--)
	{
		j[i];
	}
}
