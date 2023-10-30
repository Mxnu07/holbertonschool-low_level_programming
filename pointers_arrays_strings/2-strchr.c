#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in strings
 * @s: string to search
 * @c: character to locate
 * Return: if @c is found pointer to occurence, if c is not found null
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
