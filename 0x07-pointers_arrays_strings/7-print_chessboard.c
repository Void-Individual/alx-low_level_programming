#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: pointer to a 2d array
 * Return: empty
 */

void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;
	char piece = 0;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			piece = a[x][y];
			_putchar(piece);
		}
		_putchar('\n');
	}
}
