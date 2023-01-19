#include "variadic_functions.h"

/**
 * print_all - fun that prints anything
 * @format: parameter for num of args
 *
 * void fun
 */
void print_all(const char * const format, ...)
{
	va_list all;
	int i = 0, j, pri = 0;
	char args[] = {'c', 'i', 'f', 's'};

	va_start(all, format);
	while (format && format[i])
	{
		j = 0;
		while (args[j])
		{
			if (format[i] == args[j] && pri)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int)), pri = 1;
				break;
			case 'i':
				printf("%d", va_arg(all, int)), pri = 1;
				break;
			case 'f':
				printf("%f", va_arg(all, double)), pri = 1;
				break;
			case 's':
				if (!format[i])
				{
					printf("(nil)");
					break;
				}
				printf("%s", va_arg(all, char *)), pri = 1;
				break;
		} i++;
	}
	va_end(all);
	printf("\n");
}
