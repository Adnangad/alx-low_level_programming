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
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
