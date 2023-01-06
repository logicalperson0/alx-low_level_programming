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
	int i, x = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			x *= atoi(argv[i]);
		}
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
