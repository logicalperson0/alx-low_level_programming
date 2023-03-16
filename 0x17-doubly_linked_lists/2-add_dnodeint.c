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

	if (head == NULL)
		return (NULL);

	str = malloc(sizeof(dlistint_t));

	str->prev = NULL;
	str->n = n;
	str->next = NULL;
	str->next = *head;
	(*head)->prev = str;
	*head = str;

	return (*head);
}
