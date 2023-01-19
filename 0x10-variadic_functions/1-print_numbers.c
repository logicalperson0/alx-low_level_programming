#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: parameter that separates nums
 * @n: num of args as parameter
 *
 * Return: printed nums
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		j = (va_arg(ap, int));
		printf("%d", j);

		if (i == (n - 1))
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");

}
