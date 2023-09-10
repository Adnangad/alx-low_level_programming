/*
 * File:9-print_comb.c
 * Author:Adnan
 */

#include <stdio.h>

/**
 * main - prints combinations of numbers
 *
 * Return:Always 0.
 */
int main(void)
{
	char list = '0';

	while (list <= '9')
	{
		putchar(list);
		list++;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
