#include "lists.h"

/**
 * delete_dnodeint_at_index - del at the node at index
 *
 * @head: ptr to a ptr to list
 * @index: index to del
 *
 * Return: 1 for Success, 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tra, *del;

	tra = *head;

	if (head == NULL)
		while (tra->prev != NULL)
			tra = tra->prev;

	while (tra != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = tra->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				del->next = tra->next;
				if (tra->next != NULL)
					tra->next->prev = del;
			}
			free(tra);
			return (1);
		}
		del = tra;
		tra = tra->next;
		i++;
	}
	return (-1);
}
