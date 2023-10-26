#include "main.h"

/**
 * get_bit - returns value of a bit at a give index
 * @n:the number
 * @index:the index
 *
 * Return:value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
