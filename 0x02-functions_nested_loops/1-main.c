#include "main.h"

#include <stdio.h>

void print_alphabet()
{
	char name = 'a';

	while (name <= 'z')
	{
		putchar(name);
		name++;
	}
	putchar('\n');
}
