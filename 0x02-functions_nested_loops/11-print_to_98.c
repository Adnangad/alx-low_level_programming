#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 * @n:starting point
 *
 * Return:none
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}

			n++;
		}
	}

	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}

			n--;
		}
	}
	putchar('\n');
}
