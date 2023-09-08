/*
 * File: 4-print_alphabt.c
 * Author: Adnan
 */

#include <stdio.h>

/**
 * main - Prints all letters except 'q' and 'e'
 *
 * Return: Always 0.
 */
int main(void)
{
	char small = 'a';

	while (small <= 'z')
	{
		if (small != 'e' && small != 'q')
		{
			putchar(small);
		}
		small++;
	}

	putchar('\n');

	return (0);
}
