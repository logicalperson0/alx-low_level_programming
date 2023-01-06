#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function that returns its name
 * @argc: parameter that counts num of args on command line
 * @argv: parameter that is arg vector
 * Return: name of the fun
 */
int main(int argc, char *argv[])
{
	unsigned int i, x = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		x += atoi(argv[argc]);
	}
	printf("%d\n", x);
	return (x);
}
