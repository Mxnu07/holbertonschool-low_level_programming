#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - print every minute of day
 * Return: ...
 */
void jack_bauer(void)
{
	int a, b, c, m;

	for (a = 0; a<=2; a++)
	{
		for (b = 0; b <= 9; b++)
	{
		if ((a <= 1 && b <= 9) || (a <= 2 && b<= 3))
	{
		for (c = 0; c <= 5; c++)
	{
		for (m = 0; m <= 9; m++)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(58);
		_putchar(c + '0');
		_putchar(m + '0');
		_putchar('\n');
	}
	}
	}
	}
	}
}
