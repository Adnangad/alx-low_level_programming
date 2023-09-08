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
                while ('a' <= 'z')
		{
			putchar(small);
			small++;
		}
		small= 'A';	
		while ('A' <= 'Z')
		{
			putchar(small);
			small++;
		}
	putchar('\n');
	return (0);
}
