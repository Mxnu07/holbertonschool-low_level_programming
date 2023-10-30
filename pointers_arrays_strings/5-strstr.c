#include <stdio.h>
#include "main.h"
/**
 * _strstr - locate substring
 * @haystack: string ro search
 * @needle: substring to locate
 * Return: if located a pointer of substring, if not Null
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
