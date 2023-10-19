#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * Return: 1 if n is greater than zero, 0 if is zero, -1 if is less than zero
 * @n: sign of number
 */
int print_sign(int n)

{
	if (n > 0)
	{
	putchar(43);
	return (1);
	}
	else if (n == 0)
	{
	putchar(48);
	return (0);
	}
	else if (n < 0)
	{
	putchar(45);
	return (-1);
	}
}
