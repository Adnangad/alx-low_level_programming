/**
 * _islower(int c) - checks for lower
 *
 * Return:Always 0.
 */

#include <ctype.h>

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
