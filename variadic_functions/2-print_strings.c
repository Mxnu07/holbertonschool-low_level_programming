#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print strings separated
 * @separator: strings
 * @n: numbers of arg
 * Return: return type
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sp;

	unsigned int m;
	char *args;

	va_start(sp, n);

	for (m = 0; m < n; m++)
{
		args = va_arg(sp, char*);

		if (args)
		{
			printf("%s", args);
		}
		else
		{
			printf("(nil)");
		}
		if (m < (n - 1) && separator)
		{
			printf("%s", separator);
		}
}
	putchar('\n');

	va_end(sp);
}
