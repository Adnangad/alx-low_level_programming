#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two int
 * @a:first int
 * @b:second int
 *
 * Return:sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two int
 * @a:first int
 * @b:second int
 *
 * Return:difference.
 */
int op_sub(int a, int b)
{
        return (a - b);
}
/**
 * op_mul - multiplies two int
 * @a:first int
 * @b:second int
 *
 * Return:multiplication.
 */
int op_mul(int a, int b)
{
        return (a * b);
}
/**
 * op_div - divides two int
 * @a:first int
 * @b:second int
 *
 * Return:division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}
/**
 * op_mod - finds mod of two int
 * @a:first int
 * @b:second int
 *
 * Return:remainder.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}
