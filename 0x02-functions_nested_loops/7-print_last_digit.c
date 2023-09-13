/*
 * File:7-print_last_digit.c
 * Author:Adnan
 */

#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit
 * @n:the number to be examined
 *
 * Return:returns the last digit
 */
int print_last_digit(int n)
{
	int las = n % 10;

	if (las >= 0)
	{
		printf("%d", las);
	}
	else if (las < 0)
	{
		las = -las;

		printf("%d", las);
	}
	return (las);
}
