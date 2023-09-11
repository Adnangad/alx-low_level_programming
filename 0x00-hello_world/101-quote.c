#include <stdio.h>

/**
 * main  prints given words to screen
 *
 * Return:Always 1.
 */
int main(void)
{
	char *adn = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs (adn, stdout);
	return (1);
}
