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
	int leng = strlen(str);
	int haf = leng / 2;
	int i = haf;

	if (str[i] != '\0')
	{
		while (i < leng)
		{
			putchar(str[i]);
			i += 1;
		}
	}
	putchar('\n');
}
