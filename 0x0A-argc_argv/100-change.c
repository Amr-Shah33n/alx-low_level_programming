#include <stdio.h>
#include <stdlib.h>

/**
 * min_cents - returns min number of cents recursively
 * @amt: input amount
 * Return: min number of needed coins
 **/
int min_cents(int amt)
{
	if (amt >= 25)
	{
		return (1 + min_cents(amt - 25));
	}
	if (amt >= 10)
	{
		return (1 + min_cents(amt - 10));
	}
	if (amt >= 5)
	{
		return (1 + min_cents(amt - 5));
	}
	if (amt >= 2)
	{
		return (1 + min_cents(amt - 2));
	}
	if (amt == 1)
	{
		return (1);
	}
	return (0);
}
/**
 * main - takes input argument and outputs minumum change needed
 * @argc: count of input arguments
 * @argv: array of input arguments
 * Return: 0 on success 1 on error
 **/
int main(int argc, char *argv[])
{
	int n = --argc;
	int amt;

	if (n != 1)
	{
		printf("Error\n");
		return (1);
	}
	amt = atoi(argv[n]);
	if (amt <= 0)
	{
		printf("%i\n", 0);
		return (0);
	}
	printf("%i\n", min_cents(amt));
	return (0);
}
