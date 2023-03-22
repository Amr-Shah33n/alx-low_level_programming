#include "main.h"

/**
 * print_last_digit - print the last digit
 *
 * @n: Input integer
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int rem = n % 10;

	int abs_rem;

	if (rem >= 0)
	{
		abs_rem = rem;
	}
	else
	{
		abs_rem = rem * -1;
	}
	_putchar('0' + abs_rem);
	return (abs_rem);
}
