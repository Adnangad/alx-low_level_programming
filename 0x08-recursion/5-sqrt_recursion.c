#include "main.h"
#include <math.h>


/**
 *  actual - finds the squareroot
 *  @n:number to be det
 *  @square:no to check
 *
 *  Return:-1 if no squareroot
 */
int actual(int n, int square)
{
	if (n * n == square)
	{
		return (n);
	}
	else if (square < n * n)
	{
		return (-1);
	}
	else
	{
		return (actual(n + 1, square));
	}	
}

/**
 * _sqrt_recursion - finds squareroot
 * @n:number whose squareroot is to be found
 *
 * Return:actual.
 */
int _sqrt_recursion(int n)
{
	return (actual(1, n));
}
