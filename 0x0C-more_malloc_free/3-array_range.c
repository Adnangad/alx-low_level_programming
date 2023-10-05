#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of int
 * @min:min no of value
 * @max:max value of array
 *
 * Return:point.
 */
int *array_range(int min, int max)
{
	int *point, i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	point = (int *)malloc(size * sizeof(int));

	if (point == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max; i++)
	{
		point[i] = min + i;
	}
	return (point);
}
