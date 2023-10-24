#include "lists.h"

/**
 * pop_listint - deletes head node of a list and return its data
 * @head:pointer to pointer of head node
 *
 * Return:head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *help;
	int num;

	if (*head == NULL)
	{
		return (0);
	}
	help = *head;
	num = help->n;
	*head = (*head)->next;
	free(help);
	return (num);
}
