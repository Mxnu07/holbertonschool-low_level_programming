#include <stdio.h>
#include "main.h"
#include <string.h>
#include "_putchar.c"
/**
 * print_rev - function to print reversed string
 * @str: string to reverse
 */
void print_rev(char *s)
{
	char str[] = ("I do not fear computers. Ifear the lack of them - Isaac Asimov");

	strrev(str);
	putchar(str);
}
