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
	int list = '0';

	while (list <= '9')
	{
		putchar(list);
		if (list < '9')
		{
			putchar(',');
			putchar(' ');
		}
		list++;
	}

	putchar('\n');
	return (0);
}
