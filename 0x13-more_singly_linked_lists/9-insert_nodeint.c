#include "lists.h"

/**
 * insert_nodeint_at_index - func that inserts a new node at a given position.
 * @head: parameter
 * @idx: index parameter
 * @n: parameter for value to be added at idx index
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new;
	unsigned int tra = 1;

	node = *head;

	if (idx != 0)
	{
		while (tra < idx && node != NULL)
		{
			if (node == NULL)
				return (NULL);
			node = node->next;
			tra++;
		}
	}
	if (node == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{

		new->next = node->next;
		node->next = new;
	}
	return (new);
}
