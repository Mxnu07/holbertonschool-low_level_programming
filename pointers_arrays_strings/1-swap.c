#include <stdio.h>
#include "main.h"
/**
 * swap_int -  swap values of two integers
 * @a: one of the swapped values
 * @b: one of the swapped values
 * Return: nothing
 */
void swap_int(int *a, int *b);
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
