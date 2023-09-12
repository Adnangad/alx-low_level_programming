/**
 * _islower(int c) - checks for lower
 *
 * Return:Always 0.
 */

#include <ctype.h>
#include "main.h"

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
