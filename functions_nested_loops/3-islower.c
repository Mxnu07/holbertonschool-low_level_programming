#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for loweercase character
 * Return: 1 if lowercase character or 0 otherwise
 *@c: character to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
