#include "main.h"
#include "_putchar.h"

/**
 * print_square - prints char depending on size
 * @size:size to be checked
 *
 * Return:none.
 */
void print_square(int size)
{
	if ( size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int d = 0;

		while (d < size)
		{
			int a = 0;

			while ( a < size)
			{
				_putchar('#');
				a++;
			}
			_putchar('\n');
			d++;
		}
	}
}
