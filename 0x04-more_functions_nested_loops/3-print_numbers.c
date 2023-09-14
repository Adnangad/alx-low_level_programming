#include "main.h"
#include <stdio.h>
#include "_putchar.h"
/**
 * print_numbers - prints numbers 0-9
 *
 * Return:the numbers
 */
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
