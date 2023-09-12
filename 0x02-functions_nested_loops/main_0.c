/*
 * File:3-main.c
 * Author:Adnan
 */

#include "main.h"
#include "_putchar.h"
#include <stdio.h>

/**
 * main - checks for lowercase
 *
 * Return:Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
