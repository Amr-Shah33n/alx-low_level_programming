#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include <stdlib.h>


/**
 * main - check code
 * @argc: arg count
 * @argv: array of arguments
 * Return: exits status 0 on success
 **/
int main(int argc, char **argv)
{

	int a, b, res;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((b == 0) && (*argv[2] == '%' || *argv[2] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	res = operation(a, b);
	printf("%i\n", res);
	return (0);
}
