#include "function_pointers.h"
#include <stdio.h>

/**
 * print_help - contains name
 * @name:char name.
 *
 * Return:none.
 */
void print_help(char *name)
{
	printf("%s", name);
}
/**
 * print_name - prints name
 * @name:name to be printed
 * @f:function pointer
 *
 * Return:none.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
