#include "main.h"

/**
 * _atoi - converts str to int
 *
 * @s: a ascii char
 *
 * Return: Always a int from str
 */
int _atoi(char *s)
{
	unsigned int i = 0, j = 0, k = 1, digit = 0, negl = 1, num;

	while (s[i] != '\0')
	{
		if ((s[i] < '0' || s[i] > '9') && j > 0)
			break;

		if (s[i] == '-')
			negl *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			if (j > 0)
				k *= 10;
			j++;
		}
		i++;
	}
	for (num = i - j; num < i; num++)
	{
		digit = digit + ((s[num] - 48) * k);
		k /= 10;
	}
	return (digit * negl);
}
