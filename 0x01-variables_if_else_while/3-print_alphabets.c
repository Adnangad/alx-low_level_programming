/*
 * File: 3-print_alphabets.c
 * Author: Adnan Gard
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in both lowercase and uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char small_big;

	small_big = 'a';

	while (small_big <= 'z')
	{
		putchar(small_big);
		small_big++;
	}

	small_big = 'A';

	while (small_big <= 'Z')
	{
		putchar(small_big);
		small_big++;
	}

	putchar('\n');
	return (0);
}
