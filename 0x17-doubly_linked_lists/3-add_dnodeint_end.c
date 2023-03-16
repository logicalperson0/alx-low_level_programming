#include "lists.h"

/**
 * add_dnodeint_end - fun hat adds a new node at the end of a dlistint_t list
 * @head: ptr to ptr to start of list
 * @n: data at node at end
 *
 * Return: address of new elem
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end;
	dlistint_t *tra;

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
		return (NULL);

	end->next = NULL;
	end->n = n;
	end->prev = NULL;

	tra = *head;

	if (tra != NULL)
	{
		while (tra->next != NULL)
			tra = tra->next;
		tra->next = end;
	}
	else
		*head = end;

	end->prev = tra;

	return (end);
}
