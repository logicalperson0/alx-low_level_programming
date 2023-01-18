#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - fun that uses add, sub, mul, div, mod
 * @argc: count of argv[]
 * @argv: parameter for input at runtime
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	opr = get_op_func(argv[2]);

	if (opr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", opr(num1, num2));
	return (0);
}
