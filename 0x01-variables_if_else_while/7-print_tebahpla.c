/*
 * File:7-print_tebahpla.c
 * Author:Adnan
 */

#include <stdio.h>
/**
 * main - prints alphabet in reverse
 *
 * Return:Always 0.
 */
int main(void)
{
	char rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}

	putchar('\n');
	return (0);
}
