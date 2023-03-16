#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 *
 * @head: ptr to ptr to start of list
 * @n: data for list
 *
 * Return: list of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *str;
	dlistint_t *tra;

	str = malloc(sizeof(dlistint_t));
	if (str == NULL)
		return (NULL);

	str->prev = NULL;
	str->n = n;
	tra = *head;

	if (tra != NULL)
	{
		while (tra->prev != NULL)
			tra = tra->prev;
	}
	str->next = tra;
	if (tra != NULL)
		tra->prev = str;

	*head = str;
	return (str);
}
