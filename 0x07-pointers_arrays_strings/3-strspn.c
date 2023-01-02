#include "main.h"

/**
 * _strspn - fun that gets the length of a prefix substring.
 *
 * @s: a ascii char
 * @accept: a parameter for the fun that is compared to
 *
 * Return:
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int sum;

	for (i = 0; s[i] != '\0'; i++)
	{
		sum = 1;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				sum = 0;
				break;
			}
			j++;
		}
		if (sum == 1)
			break;
	}
	return (i);
}
