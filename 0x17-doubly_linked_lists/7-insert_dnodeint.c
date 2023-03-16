#include "lists.h"

/**
 * insert_dnodeint_at_index - func that inserts a new node at a given position
 *
 * @h: ptr to ptr to list
 * @idx: the position to be inserted
 * @n: data at idx
 * Return: list with new node at pos idx
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tra, *x;
	dlistint_t *new;

	if (h == NULL || *h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	tra = *h;
	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}

	while (i < idx)
	{
		if (tra->next == NULL)
			return (NULL);
		tra = tra->next;
		i++;
	}
	if (i == idx && tra->next == NULL)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	new->n = n;
	x = tra->prev;
	tra->prev = new;
	x->next = new;
	new->prev = x;
	new->next = tra;
	if (new->next != NULL)
		new->next->prev = new;

	return (new);
}
