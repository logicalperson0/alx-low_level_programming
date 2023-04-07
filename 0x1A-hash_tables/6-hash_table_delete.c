#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **a;
	hash_node_t *tempo, *del;
	char *k, *v;
	unsigned long int s, x = 0;

	if (ht == NULL)
		return;

	a = ht->array;
	s = ht->size;

	while (x < s)
	{
		tempo = a[x];
		while (tempo != NULL)
		{
			k = tempo->key;
			v = tempo->value;
			del = tempo->next;
			free(k);
			free(v);
			free(tempo);
			tempo = del;
		}
		x++;
	}
	free(a);
	free(ht);
}
