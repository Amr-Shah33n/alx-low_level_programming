#include "main.h"

/**
 * jack_bauer - prints 24hours of the day
 *
 * Return: void return
 */
void jack_bauer(void)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == 2 && j > 3)
			{
				break;
			}
			for (int k = 0; k < 6; k++)
			{
				for (int l = 0; l < 10; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar(10);
				}
			}
		}
	}
}
