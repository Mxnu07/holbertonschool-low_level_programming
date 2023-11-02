#include <stdio.h>
/**
 * main - prints all arguments its receives
 * @argc:
 * @argv:
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count =1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
