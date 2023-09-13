/*
 * File:5-sign.c
 * Author:Adnan
 */

#include "main.h"
#include "_putchar.h"

/**
 * print_sign - checks wether a number is negative or positive
 * @n:the input number to be checked
 *
 * Return:1 on positive, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
