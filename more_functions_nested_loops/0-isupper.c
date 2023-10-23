#include <stdio.h>
#include "main.h"
/**
 * _isupper - check for uppercase character
 * 
 * Return: 1 if is uppercase, zero otherwise
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
