#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name -  function that prints a name
 * @name: parameter
 * @f: a function ptr parameter
 * void fun
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
