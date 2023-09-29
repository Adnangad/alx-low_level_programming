#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the no of arg
 * @argc:no of arg
 * @argv:contents of arg
 *
 * Return:Always 0.
 */
int main(int argc, char *argv[])
{
	int i,j;
	int sum = 0;
	int nom;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			nom = atoi(argv[i]);

			j = 0;

			while (argv[i][j] != '\0')
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			if (nom < 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += nom;
		}
		printf("%d\n", sum);
	}
	return (0);
}
