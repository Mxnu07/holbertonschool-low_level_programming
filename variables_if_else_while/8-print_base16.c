#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int n;

	for (n = 0; n < 10; n++)
	putchar((n % 10) + '0');
	for (a = 'a'; a <= 'f'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
