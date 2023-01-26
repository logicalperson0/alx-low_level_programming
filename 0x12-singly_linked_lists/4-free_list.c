#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: parameter
 * void func
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
}
