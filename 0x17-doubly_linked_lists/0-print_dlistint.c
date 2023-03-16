#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: parameter for ptr to head of list
 *
 * Return: num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	printf("%d\n", h->n);
	return (i + 1);
}
