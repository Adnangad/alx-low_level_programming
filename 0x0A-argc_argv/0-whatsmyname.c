#include <stdio.h>

/**
 * main - prints the name of the file
 * @argc:number of arguments
 * @argv:actual contents of args
 *
 * Return:always 0.
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
