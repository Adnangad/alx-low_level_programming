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
	int n, i, j, **point;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	point = (int **)malloc(height * sizeof(int *));

	if (point == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		point[i] = (int *)malloc(width * sizeof(int));

		if (point[i] == NULL)
		{
			while (i >= 0)
			{
				free(point[i]);
				i--;
			}
			free(point);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (n = 0; n < width; n++)
		{
			point[j][n] = 0;
		}
	}
	return (point);
}
