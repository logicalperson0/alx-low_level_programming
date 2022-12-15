#include "main.h"
/**
 * print_triangle - draws a triangle
 *
 * @size: the parameter for triangle
 *
 * Return: void function
 */
void print_triangle(int size)
{
	int i;
	int o;

	for (i = 0; i < size; i++)
	{
		for (o = 1; o < (size - i); o++)
		{
			_putchar(' ');
		}
		for (o--; o < size; o++)
		{
			_putchar(35);
		}
		if (i < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
