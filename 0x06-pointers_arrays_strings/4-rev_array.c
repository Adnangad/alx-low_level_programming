#include "main.h"
#include "_putchar.h"
#include <stdio.h>

/**
 * reverse_array - reverses the order of array
 * @a:name of array
 * @n:element of array
 *
 * Return:none.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		int rev = a[i];

		a[i] = a[j];
		a[j] = rev;

		i++;
		j--;
	}
}
