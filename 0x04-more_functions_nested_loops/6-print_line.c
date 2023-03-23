#include "main.h"

/**
 * print_line - prints _ n times followed by a new line
 * @n: Integer, number of repetitions
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}
