#include "main.h"

/**
 * is_prime_number - checks for prime no
 * @n:int to be checked
 *
 * Return:1 if input is prime else 0.
 */
int is_prime_number(int n)
{
	if (n / n == 1 && n / 1 == n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
