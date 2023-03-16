#include "lists.h"

/**
 * get_dnodeint_at_index - func that returns the nth node of a
 * dlistint_t linked list
 *
 * @head: ptr to start of list
 * @index: node to be found
 *
 * Return: nth node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
