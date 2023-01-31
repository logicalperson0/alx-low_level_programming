#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: parameter, passed list
 *
 * Return: ptr to 1st node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev, *i;

	rev = NULL;
	i = NULL;

	while (*head != NULL)
	{
		i = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = i;
	}
	*head = rev;

	return (*head);
}
