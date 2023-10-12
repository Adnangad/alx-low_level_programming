#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calc math operations
 * @argc:number of arguments
 * @argv:actual contents of arguments
 *
 * Return:always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, answer;
	int (*sign)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = get_op_func(argv[2]);
	if (sign == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	answer = (*sign)(num1, num2);

	printf("%d\n", answer);
	return (0);
}
