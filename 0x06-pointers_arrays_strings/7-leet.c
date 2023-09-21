#include "main.h"

/**
 * leet - encodes diff letters
 * @s:string to be encoded
 *
 * Return:s.
 */
char *leet(char *s)
{
	int i = 0;
	char a[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	while (s[i] != '\0')
	{
		int j = 0;

		while (j < 10)
		{
			if (s[i] == a[j])
			{
				s[i] = n[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
