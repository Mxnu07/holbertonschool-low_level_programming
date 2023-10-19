#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_alphabet - This function prints the alphabet from 'a' to 'z'
 * Return: void (Success)
 */
void print_alphabet(void)
{
char m;

for (m = 'a'; m <= 'z'; m++)
{
	_putchar(m);
}
	_putchar('\n');
}
