#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list.
 * @h: parameter
 *
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
