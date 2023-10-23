#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - print numbers 0 up to 9
 * Description: print numbers except 2 and 4
 * Return: the number 0 up to 9
 */
void print_most_numbers(void)

{
		int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			putchar(x + '0');
		}
	}

	putchar('\n');
}
