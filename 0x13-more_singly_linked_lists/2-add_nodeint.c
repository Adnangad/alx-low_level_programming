#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head:pointer to a pointer to the head node
 * @n:the field in the struct
 *
 * Return:address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (*head == NULL)
	{
		new = *head;
	}
	else
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->next = *head;
	}
	return (new);
}
