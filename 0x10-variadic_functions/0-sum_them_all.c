#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds the sum of its parametres
 * @n:the number of arguments
 *
 * Return:sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list name;
		va_start(name, n);

		for (i = 0; i < n; i++)
		{
			x = va_arg(name, unsigned int);
			sum += x;
		}
		va_end(name);
		return (sum);
	}
}
