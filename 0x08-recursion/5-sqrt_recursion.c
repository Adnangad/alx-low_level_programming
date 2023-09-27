#include "main.h"

/**
 * actual - finds squareroot
 * @n:no to be checked
 * @sq:no to check
 *
 * Return:-1 if no sqroot
 */
int actual(int n, int sq)
{
	if (n * n == sq)
	{
		return (n);
	}
	else if (sq < n * n)
	{
		return (-1);
	}
	else
	{
		return (actual(n + 1, sq));
	}
}
/**
 * _sqrt_recursion - finds squareroot
 * @n:no whose squareroot is to be found
 *
 * Return:actual.
 */
int _sqrt_recursion(int n)
{
	return (actual(1, n));
}
