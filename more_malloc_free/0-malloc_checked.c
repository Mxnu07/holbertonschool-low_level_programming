#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @m: pointer
 * @b: unisigned int
 * Return: pointer to allocated memory, if fails return 98
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}

	return (m);
}
