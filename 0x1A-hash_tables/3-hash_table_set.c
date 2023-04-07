#include "hash_tables.h"

/**
 * add_hash_node - adds node at beginning of hash
 * @h: head of list
 * @k: key
 * @v: value
 *
 * Return: added node
 */
hash_node_t *add_hash_node(hash_node_t **h, const char *k, const char *v)
{
	hash_node_t *tempo;

	tempo = *h;

	while (tempo != NULL)
	{
		if (strcmp(k, tempo->key) == 0)
		{
			free(tempo->value);
			tempo->value = strdup(v);
			return (*h);
		}
		tempo = tempo->next;
	}
	tempo = malloc(sizeof(hash_node_t));
	if (tempo == NULL)
		return (NULL);

	tempo->key = strdup(k);
	tempo->value = strdup(v);
	tempo->next = *h;
	*h = tempo;

	return (*h);
}

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: hash table you want to add to
 * @key: is the key
 * @value: associated with key
 *
 * Return: 1 for success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int v, s;
	hash_node_t **a;
	hash_node_t *new;

	if (ht == NULL)
		return (0);

	if (key == NULL)
		return (0);

	s = ht->size;
	a = ht->array;

	v = key_index((const unsigned char *)key, s);
	new = add_hash_node(&(a[v]), key, value);

	if (new == NULL)
		return (0);

	return (1);
}
