#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - funtion to copy the string pointed to 
 * @dest: pointer to the buffer were we copy the string
 * @src: string to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
