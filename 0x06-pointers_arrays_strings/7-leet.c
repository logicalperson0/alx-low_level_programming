#include "main.h"

/**
 * leet - changes letters to numbers basically to 1337
 *
 * @l: a ascii char
 *
 * Return: l to the main
 */
char *leet(char *l)
{
	int i = 0, j;
	int upl[] = {97, 101, 111, 116, 108};
	int lowl[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (l[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (l[i] == upl[j] || l[i] == lowl[j])
			{
				l[i] = num[j];
				break;
			}
		}
		i++;
	}
	return (l);
}
