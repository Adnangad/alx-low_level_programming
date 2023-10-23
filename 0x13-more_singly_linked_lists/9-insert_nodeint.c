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
	listinit_t *new = malloc(sizeof(listinit_t));
	listinit_t *help = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	idx--;
	while (idx != 0)
	{
		help = help->next;
		idx--;
	}
	new->next = ptr->link;
	ptr->link = new;
	return (new);
}
