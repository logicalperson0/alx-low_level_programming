#include "lists.h"

/**
 * insert_nodeint_at_index - func that inserts a new node at a given position.
 * @head: parameter
 * @idx: index parameter
 * @n: parameter for value to be added at idx index
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *prev, *nxt, *new;
	unsigned int tra = 0;

	if (*head == NULL)
		return (NULL);

	node = *head;

	while (tra < (idx - 1))
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		tra++;
	}
	prev = node;

	nxt = node->next;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	node = new;
	new->n = n;

	prev->next = new;
	new->next = nxt;

	return (new);
}
