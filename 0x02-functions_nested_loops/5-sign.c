#include "main.h"

/**
 * _print_sign - prints the sign of input n
 * @n: Input integer
 * Return: 1 for +ve, 0 for 0, -1 for -ve
 */
int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
}
