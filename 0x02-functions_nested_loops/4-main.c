/*
 * File:4-main.c
 * Author:Adnan
 */

#include "main.h"
#include "_putchar.h"

/*
 * main - checks for letters
 *
 * Return:Always 0.
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
