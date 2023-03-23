#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 14 times
 *
 * Return: void return
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 14; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			int first_char = j / 10;
			int second_char = j % 10;

			if (first_char != 0)
			{
				_putchar('0' + first_char);
			}
			_putchar('0' + second_char);
		}
		_putchar(10);
	}
}
