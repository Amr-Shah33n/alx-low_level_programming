#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by sperator
 * @separator: spearator character
 * @n: number of input arguments
 * Return: void, no return
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char*);
		if (string != NULL)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
