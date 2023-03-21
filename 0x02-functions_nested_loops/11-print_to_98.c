#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers asc/desc till 98
 * @n: Input integer
 * Return: void function no return
 */
void print_to_98(int n)
{
	if ( n == 98)
	{
		printf("98\n");
	}
	else
	{
		if (n > 98)
		{
			for (int i = n; i > 98; i--)
			{
				printf("%i, ", n);
			}
			printf("98\n");
		}
		else
		{
			for (int i = n; i < 98; i++)
			{
				printf("%i, ", n);
			}
			printf("98\n");
		}
	}
}
