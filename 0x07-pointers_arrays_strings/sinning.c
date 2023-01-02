#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char *s = "swswded";
	        char *f = "0123457896";
		    char *t;

		        t = _strpbrk(s, f);
			    printf("%s\n", t);
			        return (0);
}
