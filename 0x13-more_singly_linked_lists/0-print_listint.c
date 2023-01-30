#include "lists.h"

/**
 * print_listint - func that prints all the elements of a listint_t list
 *
 * @h: parameter
 * Return: count of elements
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *i;

	i = h;

	while (i != NULL)
	{
		printf("%d\n", i->n);
		i = i->next;
		count++;
	}
	return (count);
}
