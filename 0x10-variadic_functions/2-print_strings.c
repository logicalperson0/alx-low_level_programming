#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: separates args
 * @n: num of args
 *
 * void fun
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *j;
	va_list strings;

	va_start(strings, n);

	for (x = 0; x < n; x++)
	{
		j = va_arg(strings, char *);
		if (j == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", j);

		if (x < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
