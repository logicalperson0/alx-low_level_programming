#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that returns its name
 * @argc: parameter that counts num of args on command line
 * @argv: parameter that is arg vector
 * Return: name of the fun
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
