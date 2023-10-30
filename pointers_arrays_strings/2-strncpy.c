#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copy number of bytes from string
 * @dest: buffer storing string
 * @src: string to copy
 * @n: number of byte
 * Return: result of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}


