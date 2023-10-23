#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print natural numbers
 * @m: number to start printing
 * Return: Always 0
 */
void print_to_98(int m)
{
	if (m <= 98)
	{
		for (; m <= 98; m++)
	{
		if (m == 98)
	{
		printf("%d", m);
		printf("\n");
		break;
	}
		else
	{
		printf("%d, ", m);
	}
	}
	}
	else
	{
		for (; m >= 98; m--)
	{
		if (m == 98)
	{
		printf("%d", m);
		printf("\n");
		break;
	}
	else
	{
		printf("%d, ", m);
	}
	}
	}
}
