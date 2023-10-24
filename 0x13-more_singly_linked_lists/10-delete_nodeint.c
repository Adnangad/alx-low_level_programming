#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index of linked list
 * @head:poiner to pointer of head
 * @index:index or position of head
 *
 * Return:1 if succeeded or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *help = *head;
	listint_t *bef, *now;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		now = *head;
		*head = (*head)->next;
		free(now);
		return (1);
	}
	bef = NULL;

	while (index > 0 && help != NULL)
	{
		bef = help;
		help = help->next;
		index--;
	}
	if (help != NULL)
	{
		bef->next = help->next;
		free(help);
		return (1);
	}
	else
	{
		return (-1);
	}
}
