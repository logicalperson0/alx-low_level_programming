#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: parameter
 *
 * void func
 */
void free_listint2(listint_t **head)
{
	listint_t *fee;

	if (*head == NULL)
		printf("(nil)");

	else
	{
		while (*head !=  NULL)
		{
			fee = *head;
			*head = fee->next;
			free(fee);
		}
	}
}
