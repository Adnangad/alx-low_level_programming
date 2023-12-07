#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head:pointer to head node
 * @index:index of node to be retrieved
 *
 * Return:nth at node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;

	while (i != index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
