#include "lists.h"

/**
 * sum_dlistint - sums the number data in each node
 * @head:pointer to head node
 *
 * Return:sum
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *c = head;

	while (c != NULL)
	{
		i += c->n;
		c = c->next;
	}
	return (i);
}
