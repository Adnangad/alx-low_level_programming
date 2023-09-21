#include "main.h"
#include "_putchar.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - encodes diff letters
 * @s:string to be encoded
 *
 * Return:s.
 */
char *leet(char *s)
{
	int i = 0;

	char alpa[26] = {
		'4', 'B', 'B', 'D', '3', 'F',
		'G', 'H', 'I', 'J', 'K', '1',
		'M', 'N', '0', 'P', 'Q', 'R',
		'S', '7', 'U', 'V', 'W', 'X',
		'Y', 'Z'
	};

	while (s[i] != '\0')
	{
		char d = s[i];
		int place = d - 'a';

		if (place >= 0 && place < 26)
		{
			s[i] =  alpa[place];
		}
		i++;
	}
	return (s);
}
