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
	int d = 0;
	
	if (n > 0)
	{
		while (d < n)
		{
			_putchar('_');
			d++;
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
