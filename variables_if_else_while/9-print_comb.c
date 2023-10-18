#include <stdio.h>
/**
 * main - program that prints all possible combinations of single digits
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
{
	putchar((n % 10) + '0');
	if (n != 9)
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
