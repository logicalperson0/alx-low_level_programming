#include "hash_tables.h"

/**
 * hash_table_get - unction that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value at key, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tempo;
	hash_node_t **a;
	unsigned long int s, h;

	if (ht == NULL || key == NULL)
		return (NULL);

	s = ht->size;
	a = ht->array;

	h = key_index((unsigned char *)key, s);
	tempo = a[h];

	while (tempo != NULL)
	{
		if (strcmp(tempo->key, key) == 0)
			return (tempo->value);
		tempo = tempo->next;
	}
	return (NULL);
}
