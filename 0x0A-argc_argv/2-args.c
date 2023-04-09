#include <stdio.h>

/**
 * main - prints each program input argument followed by a newline
 * @argc: argument count
 * @argv: array of input arguments
 * Return: 0 on success.
 **/
int main(int argc, char *argv[])
{
	int i;
	int n = --argc;

	(void)argc;
	for (i = 0; i <= n; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
