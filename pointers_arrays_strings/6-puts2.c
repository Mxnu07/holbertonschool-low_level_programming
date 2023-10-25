#include <stdio.h>
#include "main.h"
/**
 * puts2 - function to print character of string
 * str: string to be printed
 */
void puts2(char *str)
{
	int m;
	{
		for (m = 0; m < 9; m++)
		{
			putchar(*str);
		}
	}
}
