#include "main.h"

/**
 * print_helper - recursion helper
 * @n: input number to be converted
 * Return: void only prints number to binary
 **/
void print_helper(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		print_helper(n >> 1);
		_putchar((n & 1) + '0');
		return;
	}
}

/**
 * print_binary - prints int to binary
 * @n: input number
 * Return: void
 **/
void print_binary(unsigned long int n);
{
	if (n == 0 || n == 1)
	{
		_putchar((n & 1) + '0');
		return;
	}
	print_helper(n);
}
