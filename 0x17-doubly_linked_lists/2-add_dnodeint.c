#include "lists.h"

/**
 * add_dnodeint - adds node at beginning of a list
 * @h:pointer to pointer to head node
 * @n:the number the new node will have
 *
 * Return:address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
