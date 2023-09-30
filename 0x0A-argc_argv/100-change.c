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
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int coin = atoi(argv[1]);

	if (coin < 0)
	{
		printf("0\n");
	}
	else
	{
		i = 0;

		i += coin / 25;
		i %= 25;
		i += coin / 10;
                i %= 10;
		i += coin / 5;
                i %= 5;
		i += coin / 2;
                i %= 2;
		i += coin;

		printf("%d\n", i);
	}
	return (0);
}
