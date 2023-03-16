#include "lists.h"

/**
 * sum_dlistint - func that returns the sum of all the data in list
 *
 * @head: ptr to start of list
 *
 * Return: sum of all data in list
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		i = i + (head->n);
		head = head->next;
	}
	i = i + (head->n);

	return (i);
}
