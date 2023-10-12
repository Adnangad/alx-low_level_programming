#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator:comma separating the numbers
 * @n:the number of arguments
 *
 * Return:none.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x, i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(numbers, unsigned int);

		if (i != n - 1 && separator != NULL)
		{
			printf("%d%s", x, separator);
		}
		else if (separator == NULL && i == n - 1)
		{
			printf("%d\n", x);
		}
	}
	va_end(numbers);
}
