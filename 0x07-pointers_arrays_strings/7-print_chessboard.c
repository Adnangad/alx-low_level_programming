#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_chessboard - prints chessboard
 * @a:array rep chessboard
 *
 * Return:none.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	if (i != 8)
	{
		printf("\n");
	}
}
