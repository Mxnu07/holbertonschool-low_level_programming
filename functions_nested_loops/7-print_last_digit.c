#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print the last digit of a num
 * Return: last digit of value
 * @a: number to valued
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (b < 0)
	{
		b = b * -1;
	}
		_putchar(b + '0');
		return (b);
}
