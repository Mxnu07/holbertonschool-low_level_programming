#include <stdio.h>
#include "main.h"
/**
 * print_array - function to print elements of array
 * @a: array to print
 * @n: elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
