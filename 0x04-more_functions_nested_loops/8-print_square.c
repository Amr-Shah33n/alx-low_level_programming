#include "main.h"

/**
 * print_square - print n by n square
 * @size: input square size
 * Return: void return
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
