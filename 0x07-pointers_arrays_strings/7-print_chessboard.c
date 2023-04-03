#include "main.h"

/**
 * print_chessboard - prints 2D array of chessboard
 * @a: 2D array
 * Return: void return, only prints
 **/
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != ' ')
			{
				_putchar(a[i][j]);
			}
		}
		if (i < 2 || i > 5)
		{
			_putchar(10);
		}
	}
}
