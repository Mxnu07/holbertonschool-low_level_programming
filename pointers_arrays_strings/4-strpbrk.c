#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - search a string for any set of bytes
 * @s: string to search
 * @accept: set of bytes to search
 * Return: if match - pointer to the matched byte, if not - Null
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
