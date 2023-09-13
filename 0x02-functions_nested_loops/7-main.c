/*
 * File:7-print_last_digit.c
 * Author:Adnan
 */

#include "main.h"
#include <stdio.h>

/*
 * main - prints last digit
 *
 * Return:Always 0.
 */
int main(void)
{       
        int r;
        
        print_last_digit(98);
        print_last_digit(0);
        r = print_last_digit(-1024);
        _putchar(r + '0');
        printf("\n");
        return (0);
}
