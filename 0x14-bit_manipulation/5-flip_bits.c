#include "main.h"

/**
 * flip_bits - returns number of bits you need
 * @n:the first num
 * @m:the second
 *
 * Return:num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = n ^ m;
	unsigned int num = 0;

	while (bit)
	{
		num++;
		bit &= (bit - 1);
	}
	return (num);
}
