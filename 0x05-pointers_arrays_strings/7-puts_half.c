#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * puts_half - prints last half of string
 * @str:string to be halfed
 *
 * Return:none.
 */
void puts_half(char *str)
{
	int index = 0, len = 0, n;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		putchar(str[index]);

	putchar('\n');
}
