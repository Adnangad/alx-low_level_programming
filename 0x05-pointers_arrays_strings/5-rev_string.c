#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 * @s:string to be rev
 *
 * Return:none.
 */
void rev_string(char *s)
{
	int leng = strlen(s);
	int start = 0;
	int end = leng - 1;

	while (start < end)
	{
		char and = s[start];

		s[start] = s[end];
		s[end] = and;
		start++;
		end--;
	}
}
