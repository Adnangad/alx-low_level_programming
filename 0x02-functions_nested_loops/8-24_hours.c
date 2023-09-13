/*
 * File:8-24_hours.c
 * Author:Adnan
 */

#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints minutes of the day
 *
 * Return:time
 */
void jack_bauer(void)
{
	int hours = 0;

	while (hours <= 23)
	{
		int mins = 0;

		while (mins <= 59)
		{
			printf("%02d:%02d\n", hours, mins);
			mins++;
		}
		hours++;
	}
	printf("\n");
}
