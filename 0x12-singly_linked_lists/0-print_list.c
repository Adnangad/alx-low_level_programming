#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h:thestarting node
 *
 * Return:number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h-> str == NULL)
		{
			printf("[0] (nil)\n");
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
