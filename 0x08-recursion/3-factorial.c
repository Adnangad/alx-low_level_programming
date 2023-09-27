#include "main.h"

/**
 * factorial - gets factorial of given int
 * @n:int whose factorial is to be found
 *
 * Return:-1 if n is lower than 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n -1));
	}
}
