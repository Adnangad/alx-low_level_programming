#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints everything
 * @format:list of all types of arguments
 *
 * Return:none.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string;
	char *spr = "";
	va_list print;

	va_start(print, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", spr, va_arg(print, int));
				break;
			case 'i':
				printf("%s%d", spr, va_arg(print, int));
				break;
			case 'f':
				printf("%s%f", spr, va_arg(print, double));
				break;
			case 's':
				string = va_arg(print, char *);

				if (string == NULL)
				{
					printf("(nil)");
				}
				printf("%s%s", spr, string);
				break;
			default:
				i++;
				continue;
		}
		spr = ", ";
		i++;
	}
	printf("\n");
	va_end(print);
}
