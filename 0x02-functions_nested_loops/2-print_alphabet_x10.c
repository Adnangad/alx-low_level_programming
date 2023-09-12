/**
 * print_alphabet_x10 - prints alphabet
 *
 * Return:Always 0.
 */
#include "main.h"

#include <stdio.h>

void print_alphabet_x10(void)
{
	int rep = 0;

	while (rep < 10)
	{
		char name = 'a';

		while (name <= 'z')
		{
			putchar(name);
			name++;
		}		
		putchar('\n');
		rep++;
	}
}
