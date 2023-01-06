#include "main.h"

/**
 * rot13 - fun that encodes in rot13
 *
 * @r: a ascii char
 *
 * Return: the encoded r to main
 */
char *rot13(char *r)
{
	int i = 0, j;
	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (r[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (r[i] == A[j])
			{
				r[i] = a[j];
				break;
			}
		}
		i++;
	}
	return (r);
}
