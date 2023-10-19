#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - programs display alphabet x10
 * Return: void (Success)
 */
void print_alphabet_x10(void)
{
	char m;
	int d;

	while (d <= 9)
	{
	for (m = 'a'; m <= 'z'; m++)
	{
	putchar(m);
	}
	putchar('\n');
	d++;
	}
}
