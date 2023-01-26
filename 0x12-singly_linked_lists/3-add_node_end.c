#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * at the end of a list_t list.
 * @head: parameter
 * @str: parameter
 *
 * Return: add node to end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h, *n;
	int i = 0;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);

	h->str = strdup(str);

	while (str[i] != '\0')
		i++;
	h->len = i;
	h->next = NULL;
	n = *head;

	if (n == NULL)
	{
		*head = h;
	}
	else
	{
		while (n->next != NULL)
			n = n->next;
		n->next = h;
	}
	return (*head);
}
