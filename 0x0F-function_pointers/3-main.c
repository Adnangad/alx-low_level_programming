#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: the argument counter
 * @argv: the array of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{

	int num1, num2, answer;
	int (*pt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	pt = get_op_func(argv[2]);
	if (pt == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	answer = (*pt)(num1, num2);

	printf("%d\n", answer);
	return (0);
}
