#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list.
 * @head: parameter of the head node
 * @index: parameter for index
 *
 * Return: data at nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;

	while (i < index)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		i++;
	}
	head = node;

	return (head);
}
