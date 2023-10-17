#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - C programs print las digit of random number o variable
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int y;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
		printf("Last digit of %d is %d", n,y);
	{
	if (y > 5)
	printf(" and is greater than 5\n");

else if (y < 6)

	printf(" and is less than 6 and not 0\n");

		else if (n == 0)
			printf("and is 0\n");
	}
	return (0);
}
