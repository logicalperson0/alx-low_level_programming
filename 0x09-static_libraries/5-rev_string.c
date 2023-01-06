#include "main.h"

/**
 * rev_string - prints str and rev of str
 *
 * @s: a ASCII char
 */
void rev_string(char *s)
{
	int i = 0, j, k;
	char *jar, tempo;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	jar = s;

	for (j = 0; j < (i - 1); j++)
	{
		for (k = j + 1; k > 0; k--)
		{
			tempo = *(jar + k);
			*(jar + k) = *(jar + (k - 1));
			*(jar + (k - 1)) = tempo;
		}
	}
}
