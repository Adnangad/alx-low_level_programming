/*
 * File:6-size.c
 * Author:Adnan Gard
 */
#include <stdio.h>
/**
 * main -prints size of various parts
 *
 * Return:Always 0;
 */
int main(void)
{
	printf("Size of char:%zu byte(s)\n" , sizeof(char));
	printf("Size of an int:%zu byte(s)\n" , sizeof(int));
	printf("Size of a long int:%zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%zu byte(s)\n", sizeof(long long int));
	printf("Size of a float:%zu byte(s)\n", sizeof(float));
	return (0);
}	
