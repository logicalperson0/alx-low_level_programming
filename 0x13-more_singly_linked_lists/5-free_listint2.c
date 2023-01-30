#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: parameter
 *
 * void func
 */
void free_listint2(listint_t **head)
{
	listint_t *fee, *count;

	if (head != NULL)
	{
		count = *head;
		while (count !=  NULL)
		{
			fee = count;
			count = count->next;
			free(fee);
		}
		*head = NULL;
	}
}
