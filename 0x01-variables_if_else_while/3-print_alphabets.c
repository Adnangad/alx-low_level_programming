/*
 * File:3-print_alphabets.c
 * Author:Adnan Gard
 */
#include <stdio.h>
/**
 * main -Prints alphabet in both capital and small
 *
 * Return:Always 0.
 */
int main(void)
{       
        char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
