#include "main.h"

/**
 * helper - stack func
 * @n:number to be checked
 * @i:divisor
 *
 * Return: n divided by i.
 */
int helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (helper(n, i + 2));
}
/**
 * is_prime_number - checks for prime no
 * @n:int to be checked
 *
 * Return:1 if input is prime else 0.
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else if (n <= 1 || n % 2 == 0)
	{
		return (0);
	}
	return (helper(n, 3));
}
