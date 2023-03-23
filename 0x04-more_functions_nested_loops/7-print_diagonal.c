#include "main.h"

/**
 * print_diagonal - prints triangle with size
 * @n: Int diagonal size
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar(92);
				break;
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar(10);
	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
