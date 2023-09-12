#include "main.h"

#include <stdio.h>

void alpha()
{
	char name = 'a';

	while (name <= 'z')
	{
		putchar(name);
		name++;
	}
	putchar('\n');
}
