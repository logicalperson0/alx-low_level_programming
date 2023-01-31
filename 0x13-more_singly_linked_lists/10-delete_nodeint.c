#include "lists.h"

/**
 * delete_nodeint_at_index - func that deletes the node at index
 * @head: parameter
 * @index: parameter
 *
 * Return: 1 for Success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *nxt, *prev;
	unsigned int i = 1;

	node = *head;

	if (index != 0)
	{
		while (node != NULL && i < index)
		{
			node = node->next;
			i++;
		}
	}
	if (node == NULL || (node->next == NULL && index != 0))
		return (-1);
	if (index == 0)
	{
		prev = node;
		node = node->next;
		free(prev);
		*head = node;
	}
	else
	{
		prev = node;
		node = node->next;
		nxt = node;
		prev->next = node->next;
		free(nxt);
	}

	return (1);
}
