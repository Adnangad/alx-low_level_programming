#include "lists.h"

/**
 * free_listint - frees a list
 * @head:pointer to head node
 *
 * Return:none
 */
void free_listint(listint_t *head)
{
	listint_t *a = head;

	while (head != NULL)
	{
		head = head->next;
		free(a);
	}
}
