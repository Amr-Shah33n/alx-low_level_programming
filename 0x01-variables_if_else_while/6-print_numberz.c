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
		putchar(i + 48);
	}
	putchar(10);
	return (0);
}
