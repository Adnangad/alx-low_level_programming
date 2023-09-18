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
	int i = leng / 2;

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
