#include "main.h"

/**
 * print_triangle - prints triangle with size
 * @size: Int triangle size
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar(10);
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
