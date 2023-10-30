#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies @n bytes
 * @dest: pointer
 * @src: source buffer to copy
 * @n: number of bytes to copy
 * Return: result of dest
 */
char *_memcpy(char *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
