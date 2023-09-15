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
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
