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
        char small = 'a';
	char big = 'A';
                while ('a' <= 'z')
		{
			putchar(small);
			small++;
		}
	
		while ('A' <= 'Z')
		{
			putchar(big);
			big++;
		}
	putchar('\n');
	return (0);
}
