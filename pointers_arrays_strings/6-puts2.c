#include <stdio.h>
#include "main.h"
/**
 * puts2 - function to print character of string
 * @str: string to print
 * Return: no return
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');
			break;
		}
		if (count % 2 == 0)
			putchar(str[count]);
		count++;
	}
}
