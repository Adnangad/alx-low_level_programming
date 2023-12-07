#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h:pointer to pointer to head node
 * @idx:position to be added
 * @n:value of new node
 *
 * Return:adress
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new = malloc(sizeof(dlistint_t));
	unsigned int i = 1;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	temp = *h;

	while (i < idx && temp->next!= NULL)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next = new;
	return (new);
}
