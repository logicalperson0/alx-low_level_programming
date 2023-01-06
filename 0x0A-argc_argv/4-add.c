#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that returns its name
 * @argc: parameter that counts num of args on command line
 * @argv: parameter that is arg vector
 * Return: name of the fun
 */
int main(int argc, char *argv[])
{
	int i, x = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
			x += atoi(argv[i]);
		else
		{
			printf ("Error\n");
			return (1);
		}
	}
	printf("%d\n", x);
	return (0);
}
