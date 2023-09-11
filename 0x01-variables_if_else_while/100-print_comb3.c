/*
 * File:100-print_comb3.c
 * Author:Adnan
 */

#include <stdio.h>

/**
 * main - prints specific two digit numbers
 *
 * Return:Always 0.
 */
int main(void)
{
	int num = 0;
	while (num < 9)
	{
		int num2 = num + 1;
		while (num2 <= 9)
		{
			putchar(num + '0');
			putchar(num2 + '0');

			if (num != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num++;
	}

	putchar('\n');
	return (0);
}
