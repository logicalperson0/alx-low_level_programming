#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head:parameter for head
 * @str: parameter for str
 *
 * Return: list_t type node with ptr
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;
	int i = 0;

	h = (list_t *)malloc(sizeof(list_t));

	if (h == NULL)
	{
		return (NULL);
	}

	h->str = strdup(str);

	while (str[i] != '\0')
		i++;
	h->len = i;
	h->next = *head;
	*head = h;

	return (*head);
}
