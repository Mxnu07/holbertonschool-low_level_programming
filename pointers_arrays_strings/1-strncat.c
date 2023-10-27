#include <stdio.h>
#include "main.h"
/**
 * *_strncat - function that concatenates 2 string
 * src: string to concated
 * dest: destination f string
 *
 * Return: result of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int m  = 0;

	while (dest[i] != '\0')
	{
		i++
	}
	while (src[m] != '\0' && m < n)
	{
		dest[i] = src[m];
		i++;
		m++;
	}
	return (dest);
}
