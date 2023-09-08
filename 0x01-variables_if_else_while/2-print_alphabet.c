/*
 * File:2-print_alphabet.c
 * Author:Adnan Gard
 */
#include <stdio.h>
/**
 * main-Prints alphabetical letters
 *
 * Return:Always 0.
 */
int main(void)
{
	char letter = 'a';
		while (letter <= 'z' )
		{
			putchar(letter);
			letter++;
		}
	putchar('\n');
	return (0);
}
