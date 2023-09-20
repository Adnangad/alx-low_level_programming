#include "main.h"
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
	int i = n - 1;

	while(i >= 0)
	{
		printf("%d", a[i]);
		if ( i > 0)
                {
                        printf(",");
                        printf(" ");
                }
		i--;
	}
	printf("\n");
}
