#include "main.h"


/**
 * is_prime_number - checks for prime no
 * @n:int to be checked
 *
 * Return:1 if input is prime else 0.
 */
int is_prime_number(int n)
{
	int i = 3;

	if (n <= 1)
	{
		return (0);
	}
	while (i * i <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
