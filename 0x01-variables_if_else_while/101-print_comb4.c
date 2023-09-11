/*
 * File:101-print_comb4.c
 * Author:Adnan
 */

#include <stdio.h>

/**
 * main - prints combo of 2 digit numbers
 *
 * Return:Always 0.
 */
int main(void)
{       
        int num = 0;
        
        while (num < 8)
	{
		int num2 = num + 1;

		while (num2 < 9)
		{
			int num3= num2 + 1;

			while (num3 <= 9)
			{
				putchar(num + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');

				if (num !=7 || num2 !=8 || num3 !=9)
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
		}
		num++;
	}

	putchar('\n');
	return (0);
}
