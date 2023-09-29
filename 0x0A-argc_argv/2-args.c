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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
