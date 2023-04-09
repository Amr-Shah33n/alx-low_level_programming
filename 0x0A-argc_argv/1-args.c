#include <stdio.h>

/**
 * main - prints program's count of input arguments
 * @argc: argument count
 * @argv: array of input arguments
 * Return: 0 on success.
 **/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", --argc);
	return (0);
}
