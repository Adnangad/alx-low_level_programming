#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2d array
 * @width:row of array
 * @height:collumn of array
 *
 * Return:point.
 */
int **alloc_grid(int width, int height)
{
	int size, i, j, **point;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	size = width * height;

	point = (int **)malloc(size * sizeof(int));

	if (point == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		point[i] = (int *)malloc(width * sizeof(int));

		if (point[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(point[j]);
			}
			free(point);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			point[i][j] = 0;
		}
	}
	return (point);
}
