#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy of the string given as a parameter.
 * @str: unsigned int
 * Return: char pointer
 */
char *_strdup(char *str)
{
	int counter1, counter2;
	char *str2;

	counter1 = 0;
	counter2 = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[counter1] != '\0')
	{
		counter1++;
	}

	str2 = malloc(sizeof(char) * (counter1 + 1));

	if (str2 == NULL)
	{
		return (NULL);
	}

	while (counter2 < counter1)
	{
		str2[counter2] = str[counter2];
		counter2++;
	}

	str2[counter2] = '\0';

	return (str2);
}
