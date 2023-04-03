#include "main.h"

/**
 * print_chessboard - prints 2D array of chessboard
 * @a: 2D array
 * Return: void return, only prints
 **/
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (; i < 8; i++)
	{
		j = 0;
		for (; j < 8; j++)
		{
			if (a[i][j] != ' ')
			{
				_putchar(a[i][j]);
			}
		}
		_putchar(10);
	}
}
