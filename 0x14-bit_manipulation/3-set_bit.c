#include "main.h"

/**
 * set_bit - sets value of bit to 1
 * @n:the number
 * @index:given index
 *
 * Return:1 if worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8 && n)
	{
		*n |= (1UL << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
