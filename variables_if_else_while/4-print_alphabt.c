#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry poiny
 * Return: 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}
	putchar('\n');
	return (0);
}
