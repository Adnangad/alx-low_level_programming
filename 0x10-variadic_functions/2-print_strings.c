#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator:separates strings
 * @n:number of strings
 *
 * Return:none.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(str, char *);

		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}
