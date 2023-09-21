#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes first letter
 * @s:string to be evaluated
 *
 * Return:s.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (isspace(s[i - 1]) ||
				ispunct(s[i - 1]))
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
	return (s);
}
