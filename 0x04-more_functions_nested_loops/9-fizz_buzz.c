#include "main.h"
#include <stdio.h>


/**
 * main - prints numbers 1-100
 *
 *Return:always 0.
 */
int main(void)
{
	int n = 0;

	while (n <= 100)
	{
		if (n == 0)
		{
			printf("0");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n == 0)
		{
			printf("0");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
		n++;
		
	}
	printf("\n");
	return (0);
}
