#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h:pointer to the head node
 *
 * Return:number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	listint_t *help = NULL;

	if (h == NULL)
	{
		return (NULL);
	}
	help = h;

	while (help != NULL)
	{
		count++;
		printf("%d\n", h->n);
		help = help->next;
	}
       return (count);
}
