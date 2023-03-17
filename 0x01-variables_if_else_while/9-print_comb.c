#include <stdio.h>

/**
 * main - Entry point
 *
 * prints numbers in asc order with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 0)
		{
			putchar(' ');
		}
		putchar(i+48);
		if (i != 9)
		{
			putchar(',');
		}
	}
	putchar(10);
	return (0);
}
