#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a
 * linked dlistint_t list
 *
 * @h: ptr to head of list
 *
 * Return: num of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elem = 0;

	if (h == NULL)
		return (elem);
	while (h->next != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem + 1);
}
