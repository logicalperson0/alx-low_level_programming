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

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		tra = *h;
		while (i < idx - 1 && tra != NULL)
		{
			tra = tra->next;
			i++;
		}
		if (tra == NULL)
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		x = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = tra;
		x = tra->next;
		tra->next = new;
	}
	new->next = x;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
