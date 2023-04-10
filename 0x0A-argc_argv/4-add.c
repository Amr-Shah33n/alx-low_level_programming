#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of all input arguments
 * @argc: argument count
 * @argv: array of input arguments
 * Return: 0 on success, 1 on failure
 **/
int main(int argc, char *argv[])
{
	int n = --argc;
	int i;
	char *tmp;
	int res = 0;

	if (n == 0)
	{
		printf("%i\n", res);
		return (0);
	}
	for (i = 1; i <= n ; i++)
	{
		tmp = argv[i];
		while (*tmp != '\0')
		{
			if (!('0' <= *tmp && *tmp <= '9'))
			{
				printf("Error\n");
				return (1);

			}
			tmp++;
		}
		res = res + atoi(argv[i]);
	}
	printf("%i\n", res);
	return (0);
}
