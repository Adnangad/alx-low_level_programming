/*
 * File:5-sign.c
 * Author:Adnan
 */

#include "main.h"
#include <stdio.h>
#include "_putchar.h"

/**
 * print_sign - checks wether a number is negative or positive
 * @c:the input number to be checked
 *
 * Return:1 on positive, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
