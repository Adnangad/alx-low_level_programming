#include "lists.h"

/**
 * add_dnodeint_end - adds new nod at end
 * @head:pointer to pointer to head
 * @n:data new node contains
 *
 * Return:address of end node or nul
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cu, *end = malloc(sizeof(dlistint_t));

	if (end == NULL)
	{
		return (NULL);
	}
	end->next = NULL;
	end->n = n;

	if (*head == NULL)
	{
		end->prev = NULL;
		*head = end;
		return (end);
	}
	cu = *head;
	while (cu->next != NULL)
	{
		cu = cu->next;
	}
	cu->next = end;
	end->prev = cu;
	return (end);
}
