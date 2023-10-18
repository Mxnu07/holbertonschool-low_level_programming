#include <stdio.h>
#include "main.h"
/**
 * main - program that prints alphabet
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	
	for(a = 'a'; a <= 'z'; a++)
{
	putchar(a);
}
putchar('\n');
return (0);
}
