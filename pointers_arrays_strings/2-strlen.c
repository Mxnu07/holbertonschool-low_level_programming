#include <stdio.h>
#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: string to evaluate
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int m;

	m = 0;

	while (s[m] != '\0')
	{
		m++;
	}

	return (m);
}
