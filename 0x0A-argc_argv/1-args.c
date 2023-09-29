#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the no of arg
 * @argc:no of arg
 * @argv:contents of arg
 *
 * Return:Always 0.
 */
int main(int argc, char *argv[])
{
	argv[0] = 0;

	printf("%d\n", argc);
	return (0);
}
