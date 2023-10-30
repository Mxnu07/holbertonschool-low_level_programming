#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int i, m;

	for (i = 0; a[i][7]; i++)
	{
		for (m = 0; m < 8; m++)
			putchar(a[i][m]);

		putchar('\n');
	}
}
