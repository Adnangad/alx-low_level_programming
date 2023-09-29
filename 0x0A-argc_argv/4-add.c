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
	int sum = 0;
	int nom;

	if (argc > 1)
	{
		while (i < argc)
		{
			nom = atoi(argv[i]);
			sum += nom;
			i++;
		}
		if (nom >= 'a' || nom <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", sum);
		}
	}
	return (0);
}
