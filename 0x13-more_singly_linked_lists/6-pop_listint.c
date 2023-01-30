#include "lists.h"

/**
 * pop_listint - func that deletes the head node of a listint_t linked list
 * @head: parameter
 *
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (head == NULL)
		return (0);
	node = *head;
	data = node->n;
	*head = node->next;
	free(node);

	return (data);
}
