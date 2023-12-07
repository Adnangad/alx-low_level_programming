#include "lists.h"

/**
 * free_dlistint - frees dub linked list
 * @head:pointer to head node
 *
 * Return:None
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cu;

	while (head != NULL)
	{
		cu = head;
		head = head->next;
		free(cu);
	}
}
