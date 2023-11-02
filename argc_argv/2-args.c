#include <stdio.h>
/**
 * main - prints all arguments its receives
 * @argc: size of argv array
 * @argv: array of the size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		{
			printf("%s\n", argv[c]);
		}
	return (0);
}
