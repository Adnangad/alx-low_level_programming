#include "main.h"
#include <string.h>

/**
 * _strcmp - compares strings
 * @s1:first string
 * @s2:second string
 *
 * Return:comparison.
 */
int _strcmp(char *s1, char *s2)
{
	int comparison;

	comparison = strcmp(s1, s2);

	return (comparison);
}
