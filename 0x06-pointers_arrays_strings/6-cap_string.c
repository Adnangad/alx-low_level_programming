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
		if (s[i - 1] == ' ' || s[i - 1] == '\t')
		{
			s[i] = (char) toupper((int)s[i]);
		}
		if (s[i - 1] == ',' || s[i - 1] == ';')
		{
			s[i] = (char) toupper((int)s[i]);
		}
		if (s[i - 1] == '.' || s[i - 1] == '!')
		{
			s[i - 1] = (char) toupper((int)s[i]);
		}
		if (s[i - 1] == '?' || s[i - 1] == '"')
		{
			s[i] = (char) toupper((int)s[i]);
		}
		if (s[i - 1] == ')' || s[i - 1] == '(')
		{
			s[i] = (char) toupper((int)s[i]);
		}
		if (s[i - 1] == '{' || s[i - 1] == '}')
		{
			s[i] = (char) toupper((int)s[i]);
		}
		if (s[i - 1] == 0 || s[i - 1] == '\n')
		{
			s[i] = (char) toupper((int)s[i]);
		}
		i++;
	}
	return (s);
}
