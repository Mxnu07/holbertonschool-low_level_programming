#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies @n bytes from memory
 * area pointed to by @src into @dest
 * @dest: pointer
 * @src: source buffer to copy
 * @n: number of bytes to copy
 * Return: result of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
