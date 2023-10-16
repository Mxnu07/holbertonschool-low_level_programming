#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * main - C program to assign random number to variable
 * Return: 0 (Success)
 */

int main (void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("%d is positive\n", n);
	} else if(n < 0)
   	{
		printf("%d is negative\n", n);
	}
	else if(n == 0)
	{
	printf("0 is zero\n");
	}
	return (0);
}	
