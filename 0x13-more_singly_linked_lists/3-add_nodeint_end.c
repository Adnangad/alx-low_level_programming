#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a list
 * @head:pointer to a pointer of head node
 * @n:value or field to be inserted
 *
 * Return:adress of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = malloc(sizeof(listint_t));
	listint_t *help = *head;

	if (end == NULL)
	{
		return (NULL);
	}
	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		while (help->next != NULL)
		{
			help = help->next;
		}
		help->next = end;
	}
		return (end);
}
