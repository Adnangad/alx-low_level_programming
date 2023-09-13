/*
 * File:6-abs.c
 * Author:Adnan
 */

#include "main.h"
#include "_putchar.h"
#include <stdio.h>

/**
 * _abs - checks for absolute value
 *
 * Return:Absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		return -c;
	}
	else if (c > 0)
	{
		return c;
	}
	else
	{
		return 0;
	}
}

