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
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if ((s[i - 1] == ' ') ||
                        (s[i - 1] == '\t') ||
                        (s[i - 1] == '\n') ||
                        (s[i - 1] == ',') ||
                        (s[i - 1] == ';') ||
                        (s[i - 1] == '.') ||
                        (s[i - 1] == '!') ||
                        (s[i - 1] == '?') ||
                        (s[i - 1] == '"') ||
                        (s[i - 1] == '(') ||
                        (s[i - 1] == ')') ||
                        (s[i - 1] == '{') ||
                        (s[i - 1] == '}'))
                {
                        s[i] -= 32;
                }
		}
		i++;
	}
	return (s);
}
