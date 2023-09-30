#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coins to make change
 * @argc:arg count
 * @argv:arg content
 *
 * Return:Always 0.
 */
int main(int argc, char *argv[])
{
	int i, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);

	if (coin < 0)
	{
		printf("0\n");
	}
	else
	{
		i = 0;

		while (coin >= 25)
		{
			coin -= 25;
			i++;
		}
		while (coin >= 10)
		{
			coin -= 10;
			i++;
		}
		while (coin >= 5)
		{
			coin -= 5;
			i++;
		}
		while (coin >= 2)
		{
			coin -= 2;
			i++;
		}
		i += coin;

		printf("%d\n", i);
	}
	return (0);
}
		
