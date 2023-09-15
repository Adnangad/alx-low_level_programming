#include "main.h"
#include "_putchar.h"

/**
 * print_line - prints lines
 * @n:numberof lines
 *
 * Return:returns lines
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int d = 0;

		while (d < n)
		{
			_putchar('_');
			d++;
		}
		_putchar('\n');
	}
}
