#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: reverse string
 */
void print_rev(char *s)
{
	int m;

	for (m = 0; s[m] != '\0'; m--)
	{
		putchar(s[m]);
	}
	putchar('\n');
}
