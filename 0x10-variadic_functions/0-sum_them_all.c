#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - retruns the sum of all input arguments
 * @n: number of input arguments
 * Return: int sum of all input arguments
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list numbers;

	if (n == 0)
		return (n);
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(numbers, int);
	}
	return (sum);
}
