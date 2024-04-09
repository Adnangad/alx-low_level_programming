#include "search_algos.h"

/**
 * binary_search - searches for a val in an array using Binary search algorithm
 * @array:pointer to the first element to search for
 * @size:size of the array
 * @value:the target to be searched for
 *
 * Return:the index of th evalue or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (array == NULL)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != high)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d", array[i]);
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
