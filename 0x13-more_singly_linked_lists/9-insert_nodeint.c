#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head:pointer to pointer of head node
 * @idx:the position where the node is inserted
 * @n:the value or field of data
 *
 * Return:adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *help;

	if (*head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	help = *head;
	while (idx > 1 && help != NULL)
	{
		help = help->next;
		idx--;
	}
	if (help != NULL)
	{
		new->next = help->next;
		help->next = new;
		return (new);
	}
	else
	{
		free(new);
		return (NULL);
	}
}
