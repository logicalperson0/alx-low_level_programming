#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: parameter for key
 * @size: size of array
 * Return: index w/r key/value is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int j;

	if (size == 0)
		return (0);
	if (key == NULL)
		return (0);

	j = hash_djb2(key) % size;

	return (j);
}
