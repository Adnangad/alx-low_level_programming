#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array:pointer to first element of an array
 * @size:number of elements of an array
 * @value:value to search for
 *
 * Return:index for the value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
