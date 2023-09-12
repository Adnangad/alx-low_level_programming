/**
 * print_alphabet - prints alphabet
 *
 * Return:Always 0.
 */
#include "main.h"

#include <stdio.h>

void print_alphabet(void)
{
	char name = 'a';

	while (name <= 'z')
	{
		putchar(name);
		name++;
	}
	putchar('\n');
}
