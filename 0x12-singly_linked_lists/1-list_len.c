#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: parameter for list_t type
 *
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *tra;
	int count = 0;

	tra = h;

	while (tra != NULL)
	{
		tra = tra->next;
		count++;
	}
	return (count);
}
