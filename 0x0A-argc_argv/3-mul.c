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
	int i = 1;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		while (i < argc)
		{
			mul *= atoi(argv[i]);
			i++;
		}
		printf("%d\n", mul);
	}
	return (0);
}
