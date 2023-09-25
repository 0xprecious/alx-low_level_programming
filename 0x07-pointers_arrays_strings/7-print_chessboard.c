#include "main.h"

/**
 * print_chessboard - utilize 2D array to print chess board
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; x < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
