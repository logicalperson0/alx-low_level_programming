#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - fun that gen random passwords
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0, j = 0, k;
	int password[100];

	srand(time(NULL));

	while (i < 100)
	{
		password[i] = rand() % 78;
		j += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - j) - '0' < 78)
		{
			k = 2772 - j - '0';
			putchar(k + '0');
			break;
		}
		i++;
	}
	return (0);
}
