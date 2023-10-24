#include "lists.h"

/**
 * sum_listint - sums all the data of a linked list
 * @head:pointer of head node
 *
 * Return:sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *help = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (help->next != NULL)
	{
		sum += help->n;
		help = help->next;
	}
	sum += help->n;
	return (sum);
}
