#include "lists.h"

/**
 * add_node_end - adds node at end of a list
 * @head:pointer to poniter
 * @str:value to be placed
 *
 * Return:address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x, *y;

	if (str == NULL)
	{
		return (NULL);
	}
	x = malloc(sizeof(list_t));

	if (x == NULL)
	{
		return (NULL);
	}
	x->str = strdup(str);

	if (x->str == NULL)
	{
		return (NULL);
	}
	x->len = strlen(x->str);
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
	}
	else
	{
		y = *head;

		while (y->next != NULL)
		{
			y = y->next;
		}
		y->next = x;
	}
	return (x);
}
