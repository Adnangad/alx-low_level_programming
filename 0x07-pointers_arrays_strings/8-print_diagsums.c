#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diagonals
 * @a:first array
 * @size:second array
 *
 * Return:none.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int first = 0;
	int second = 0;
	int k = size - 1;

	for (i = 0; i < size; i++)
	{
		first = first + a[i * size + i];
		second = second + a[i * size + k];
		k--;
	}
	printf("%d, %d\n", first, second);
}
