#include "main.h"
#include <math.h>

int _sqrt_recursion(int n);
/**
 *  actual - finds the squareroot
 *  @n:number to be det
 *
 *  Return:-1 if no squareroot
 */
int actual(int n)
{
	double square = sqrt(n);

	if (square < 0)
	{
		return -1;
	}
	else if (square != floor(square))
	{
		return -1;
	}
	else
	{
		return square;
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
	if (n < 0)
	{
		return -1;
	}
	return actual(n);
}
