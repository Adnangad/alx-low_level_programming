/*
 * File:8-print_base16.c
 * Author:Adnan
 */

#include <stdio.h>


/**
 * main -prints numbers from base 16
 *
 * Return:Always 0.
 */
int main(void)
{
	char num = '0';
	char alp = 'a';


	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alp <= 'f')
	{
		putchar(alp);
		alp++;
	}

	putchar('\n');
	return (0);
}

