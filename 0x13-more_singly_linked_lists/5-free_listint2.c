#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head:pointer to a pointer to head node
 *
 * Return:none
 */
void free_listint2(listint_t **head)
{
	listint_t *b, *c;
	c = *head;

	while (head != NULL)
	{
		b = c->next;

		free(c);
		c = b;
	}
	*head = NULL;
}
