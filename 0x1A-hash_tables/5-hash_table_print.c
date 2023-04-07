#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **a;
	hash_node_t *tempo;
	unsigned long int s, x = 0;
	char *sepa = "";

	if (ht == NULL)
		return;

	a = ht->array;
	s = ht->size;

	putchar('{');

	while (x < s)
	{
		tempo = a[x];
		while (tempo != NULL)
		{
			printf("%s'%s': '%s'", sepa, tempo->key, tempo->value);
			sepa = ", ";
			tempo = tempo->next;
		}
		x++;
	}
	putchar('}');
	putchar('\n');
}
