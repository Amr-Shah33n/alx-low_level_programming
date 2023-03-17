#include <stdio.h>

/**
 * main - Entry point
 *
 * prints alphabet with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
		{
		}
		else
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}
