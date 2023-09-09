/*
 * File:6-print_numberz.c
 * Author:Adnan
 */

#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 *
 * Return:Always 0.
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
