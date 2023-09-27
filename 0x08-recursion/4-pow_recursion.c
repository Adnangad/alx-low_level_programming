#include "main.h"
#include <math.h>

/**
 * _pow_recursion - raises numbers to power
 * @x:base number
 * @y:the value to be raised
 *
 * Return:- 1 if y < 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return -1;
	}
	else if ( y == 0)
	{
		return 1;
	}
	return x * _pow_recursion(x, y - 1);
}
