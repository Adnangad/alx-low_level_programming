#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head:pointer to pointer of head
 * @index:position of the node
 *
 * return:nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *help;

	if (head == NULL)
	{
		return (NULL);
	}
	help = head;

	if (index == 0)
	{
		return (help);
	}
	while (help != NULL && index > 0)
	{
		help = help->next;
		index--;
	}
	if (index != 0)
	{
		return (NULL);
	}
	return (help);
}
