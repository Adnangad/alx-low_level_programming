#include "lists.h"

/**
 * add_node - adds new node at beg of a list
 * @head:pointer to a pointer to a head
 * @str:string to be placsed
 *
 * Return:address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ad;

	if (str == NULL)
	{
		return (NULL);
	}
	ad = malloc(sizeof(list_t));

	if (ad == NULL)
	{
		return (NULL);
	}
	ad->str = strdup(str);

	if (ad->str == NULL)
	{
		free(ad);
		return (NULL);
	}

	ad->len = strlen(ad->str);
	ad->next = *head;
	*head = ad;
	return (ad);
}
