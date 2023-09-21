#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - converts lowercase to uppercase
 * @s:string to be checked
 *
 * Return:caps
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		s[i] = (char) toupper ((int) s[i]);
		i++;
	}
	return (s);
}
