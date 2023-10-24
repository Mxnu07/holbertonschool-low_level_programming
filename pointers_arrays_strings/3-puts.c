#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string
 * @str: string
 */
void _puts(char *str)
{
	int m;

	m = 0;

	for (m = 0; str[m] != '\0'; m++)
	{
		putchar(str[m]);
	}
	putchar('\n');
}
