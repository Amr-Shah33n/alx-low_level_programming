#include <unistd.h>

/**
 * print_line - prints _ n times followed by a new line
 *
 * Return: void
 */
void print_line(int n)
{
	for (int i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}
