#include "main.h"

/**
 * print_square - print n by n square
 * @n: input square size
 * Return: void return
 */
void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	_putchar(10);
}
