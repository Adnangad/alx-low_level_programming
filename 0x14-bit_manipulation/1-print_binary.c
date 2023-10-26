#include "main.h"
#include "_putchar.h"

/**
 * print_binary - printsbinary repof a number
 * @n:number to be converted
 *
 * Return:none
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
