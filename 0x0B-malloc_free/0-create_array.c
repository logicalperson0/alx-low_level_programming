#include "main.h"
#include <stdlib.h>

/**
 * create_array - a fun that creates an arr of chars, and
 * initializes it with a specific char
 * @size: The parameter
 * @c: The parameter with arguement for 1 char
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;


	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
