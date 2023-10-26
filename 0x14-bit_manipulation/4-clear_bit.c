#include "main.h"

/**
 * clear_bit - sets value of a bit to 0
 * @n:the number
 * @index:the index
 *
 * Return:1 if worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8 && n)
	{
		*n &= ~(1UL << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
