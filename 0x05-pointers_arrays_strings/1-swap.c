#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values of two int
 * @a:first value
 * @b:second value
 *
 * Return:None.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
