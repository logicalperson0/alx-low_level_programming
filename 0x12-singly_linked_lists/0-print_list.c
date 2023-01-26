#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: parameter that takes list_t struct type
 * Return: printed elements
 */
size_t print_list(const list_t *h)
{
	const list_t *tra;
	int count = 0;

	if (h == NULL)
		return (-1);
	tra = h;

	while (tra != NULL)
	{
		if (tra->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", tra->len, tra->str);
		tra = tra->next;
		count++;
	}
	return (count);
}
