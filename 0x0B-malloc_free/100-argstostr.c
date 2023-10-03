#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates arg of pg
 * @ac:size of array
 * @av:string
 *
 * Return:point.
 */
char *argstostr(int ac, char **av)
{
	char *poin;
	int i, len, x;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	poin = (char *)malloc(len + 1);

	if (poin == NULL)
	{
		return (NULL);
	}

	x = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(poin + x, av[i]);
		x += strlen(av[i]);
		poin[x] = '\n';
		x++;
	}
	poin[len] = '\0';

	return (poin);
}
