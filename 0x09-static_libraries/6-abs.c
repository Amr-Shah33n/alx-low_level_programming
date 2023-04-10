#include "main.h"

/**
 * _abs - retuns the abs value of input n
 * @n: Input integer
 * Return: absolute of the number
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
