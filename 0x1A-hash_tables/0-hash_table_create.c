#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: parameter for size of array
 * Return: ptr to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	hash_table_t *t;
	hash_node_t **arr;

	t = malloc(sizeof(hash_table_t));
	if (t == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	while (x < size)
	{
		arr[x] = NULL;
		x++;
	}
	t->size = size;
	t->array = arr;

	return (t);
}
