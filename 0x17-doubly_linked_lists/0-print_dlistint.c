#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: parameter for ptr to head of list
 *
 * Return: num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pri;
	int i = 0;

	if (h == NULL)
		return (i);

	pri = malloc(sizeof(dlistint_t));
	if (pri == NULL)
		return (0);
	pri = h;

	while (pri->next != NULL)
	{
		printf("%d\n", pri->n);
		pri = pri->next;
		i++;
	}
	printf("%d\n", pri->n);
	return (i + 1);
}
