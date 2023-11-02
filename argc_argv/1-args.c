#include <stdio.h>
/**
 * main - print number of arguments passed
 * @argc: size of argv array
 * @argv: an array of size argc
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))

{
	printf("%d\n", argc - 1);
	return (0);
}
