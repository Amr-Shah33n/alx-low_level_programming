#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints program's count of input arguments
 * @argc: argument count
 * @argv: array of input arguments
 * Return: 0 on success.
 **/
int main(int argc, char *argv[])
{
	int res;
	int a;
	int b;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;
	printf("%i\n", res);
	return (0);
}
