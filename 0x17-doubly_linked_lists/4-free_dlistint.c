#include "lists.h"

/**
 * free_dlistint - fun that frees a dlistint_t list.
 *
 * @head: ptr to ptr to start of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tra;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	while (head != NULL)
	{
		tra = head;
		head = head->next;
		free(tra);
	}
}
