#include <stdio.h>

/**
 * main - Entry point
 *
 * prints twice alphabet with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 26; i++)
	{
		putchar(97 + i);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(65 + j);
	}
	putchar(10);
	return (0);
}
