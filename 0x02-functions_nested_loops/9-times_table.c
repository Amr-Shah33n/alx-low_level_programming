#include "main.h"

/**
 * times_table - prints time table 0 to 9
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int mul = i * j;
			int first_digit = mul / 10;
			int second_digit = mul % 10;

			if (first_digit != 0)
			{
				putchar('0' + first_digit);
			}
			putchar('0' + second_digit);
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar(10);
	}
}
