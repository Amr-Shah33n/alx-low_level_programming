#include "main.h"

/**
 * print_most_numbers -  prints 0 to 9 skips 2,4
 *
 * Return: void return only prints
 */
void print_numbers(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		if (!(i == '2' || i == '4'))
		{
			_putchar(i);
		}
	}
	_putchar(10);
}
