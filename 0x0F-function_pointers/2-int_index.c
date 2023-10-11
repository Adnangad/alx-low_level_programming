#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an int
 * @array:the array
 * @size:array size
 * @cmp:pointer to func
 *
 * Return:0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
