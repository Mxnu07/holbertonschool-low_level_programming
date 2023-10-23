#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print number
 * Return: number 0 up to 9
 */
void print_numbers(void)

{
	int m;

	for (m = 0; m <= 9; m++)
	{
	putchar(m + '0');
	}
	putchar('\n');
}
