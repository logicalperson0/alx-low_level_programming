#include "lists.h"

/**
 * free_listint - func that frees a listint_t list.
 * @head: parameter that takes in listint_t type
 *
 * Void Func
 */
void free_listint(listint_t *head)
{
	listint_t *fee;

	while (head != NULL)
	{
		fee = head;
		head = head->next;
		free(fee);
	}
}
