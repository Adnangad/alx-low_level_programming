/*
 * File:4-isalpha.c
 * Author:Adnan
 */

#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabet
 *@c:the variables to be checked
 *
 * Return: 0 on unsuccess 1 0n success
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
