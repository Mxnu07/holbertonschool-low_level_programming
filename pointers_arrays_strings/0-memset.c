#include <stdio.h>
#include "main.h"
/**
 * _memset - fills n bytes of memory pointed to by @s with constant byte @c
 * @s: Pointer
 * @b: character to fill
 * @n: number of byte
 * Return: pointer filled @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
