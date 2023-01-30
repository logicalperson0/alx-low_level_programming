#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: parameter
 *
 * Return: sum of head datas
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	unsigned int sumd = 0, k;

	if (head == NULL)
		return (0);

	node = head;

	while (node != NULL)
	{
		k = node->n;
		sumd += k;
		node = node->next;
	}
	return (sumd);
}
