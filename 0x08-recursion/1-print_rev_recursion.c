#include "main.h"
#include "_putchar.h"
#include <string.h>

/**
 * _print_rev_recursion - prints string in rev
 * @s:string to be rev
 *
 * Return:none.
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
