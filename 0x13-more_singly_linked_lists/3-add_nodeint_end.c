#include "lists.h"

/**
 * add_nodeint_end - func that adds a new node at the end of a listint_t list
 * @head: parameter
 * @n: parameter
 *
 * Return: add nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *end;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	end = *head;
	if (end == NULL)
		*head = node;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = node;
	}
	return (*head);
}
