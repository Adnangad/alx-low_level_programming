#include "lists.h"

/**
 * free_list - frees lists
 * @head:pointer to a head
 *
 * Return:none.
 */
void free_list(list_t *head)
{
	list_t *x, *y;

	while (head != NULL)
	{
		x = head;
		y = head->next;

		free(x->str);
		free(x);
		head = y;
	}
}
