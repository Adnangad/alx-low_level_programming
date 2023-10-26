#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts binary number to an integer
 * @b:the binary number to be converted
 *
 * Return:the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] == '0' || b[i] == '1')
	{
		dec = (dec << 1) | (b[i] - '0');
		i++;
	}
	if (b[i] != '\0')
	{
		return (0);
	}
	return (dec);
}
