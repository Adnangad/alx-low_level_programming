#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints only certain parts of a string
 * @str:the string in question
 *
 * Return:none.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
